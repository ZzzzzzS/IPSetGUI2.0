#include "settingwindow.h"
#include "ui_settingwindow.h"
#include "include.h"

settingwindow::settingwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settingwindow)
{
    ui->setupUi(this);
    this->setWindowTitle("IP set");
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint | Qt::WindowStaysOnTopHint);
    this->setWindowModality(Qt::ApplicationModal);
    //this->setWindowFlags(Qt::FramelessWindowHint);              //去掉标题栏
    this->setMaximumSize(360,180);                              //设置窗口最大最小大小
    this->setMinimumSize(360,180);                              //设置窗口最大最小大小

    ui->tabWidget->setCurrentIndex(0);

    Set_Slots();                                                //设置信号槽
    Set_Value();
}

settingwindow::~settingwindow()
{
    delete ui;
}

void settingwindow::Set_Slots()
{
    QObject::connect(ui->cancelbutton,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(ui->helpbutton,SIGNAL(clicked()),this,SLOT(HelpSlot()));
    QObject::connect(ui->savebutton,SIGNAL(clicked()),this,SLOT(SaveSlot()));
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(look_Slot()));
    QObject::connect(ui->return_button,SIGNAL(clicked()),this,SLOT(return_Slot()));
    QObject::connect(ui->return_button_w,SIGNAL(clicked()),this,SLOT(return_Slot_W()));
}

void settingwindow::HelpSlot()
{
   helpwindow windowhelp;
   windowhelp.show();
   windowhelp.exec();
}

void settingwindow::SaveSlot()
{
    QSettings setting("config.ini",QSettings::IniFormat);

    setting.beginGroup("Office");
    setting.setValue("ip",QVariant(ui->ipline->text()));
    setting.setValue("subnet_mask",QVariant(ui->maskline->text()));
    setting.setValue("Gateway",QVariant(ui->gateline->text()));
    setting.setValue("DNS",QVariant(ui->dnsline->text()));
    setting.endGroup();

    setting.beginGroup("Domitory");
    setting.setValue("ip",QVariant(ui->Wipline->text()));
    setting.setValue("subnet_mask",QVariant(ui->Wmaskline->text()));
    setting.setValue("Gateway",QVariant(ui->Wgateline->text()));
    setting.setValue("DNS",QVariant(ui->Wdnsline->text()));
    setting.endGroup();

    setting.beginGroup("Drcom");
    setting.setValue("Drcom",QVariant(ui->DrcomEdit->text()));

    if(ui->DrcomEdit->text().isEmpty())
    {
        ui->checkBox->setChecked(false);
    }
    if(ui->checkBox->isChecked())
    {
        setting.setValue("Lunch","true");
    }
    else if(!ui->checkBox->isChecked())
    {
        setting.setValue("Lunch","false");
    }
    setting.endGroup();

    QMessageBox::information(this,"IP Set","Success!",QMessageBox::Close);
    this->close();
}

void settingwindow::Set_Value()
{
    QSettings *configIniRead = new QSettings("config.ini", QSettings::IniFormat);
    ui->ipline->setText(configIniRead->value("/Office/ip").toString());
    ui->maskline->setText(configIniRead->value("/Office/subnet_mask").toString());
    ui->gateline->setText(configIniRead->value("/Office/Gateway").toString());
    ui->dnsline->setText(configIniRead->value("/Office/DNS").toString());

    ui->Wipline->setText(configIniRead->value("/Domitory/ip").toString());
    ui->Wmaskline->setText(configIniRead->value("/Domitory/subnet_mask").toString());
    ui->Wgateline->setText(configIniRead->value("/Domitory/Gateway").toString());
    ui->Wdnsline->setText(configIniRead->value("/Domitory/DNS").toString());

    ui->DrcomEdit->setText(configIniRead->value("Drcom/Drcom").toString());

    if(configIniRead->value("Drcom/Lunch").toString()=="true")
    {
        ui->checkBox->setChecked(true);
    }
    else
    {
        ui->checkBox->setChecked(false);
    }
}

void settingwindow::look_Slot()
{
    QString addr;
    addr=QFileDialog::getOpenFileName(this, tr("Open File"),QDir::homePath(),tr("*.exe"));
    if(!addr.isEmpty())
    {
        ui->DrcomEdit->setText(addr);
        ui->checkBox->setChecked(true);
    }
}

void settingwindow::return_Slot()
{
    system("netsh interface ip set address \"以太网\" dhcp");
    system("netsh interface ip set dns \"以太网\" dhcp");
    if(ui->deletebox->isChecked())
    {
        QFile::remove("config.ini");
    }
    QMessageBox::information(this,"IP Set","Success!",QMessageBox::Close);
}

void settingwindow::return_Slot_W()
{
    system("netsh interface ip set address \"WLAN\" dhcp");
    system("netsh interface ip set dns \"WLAN\" dhcp");
    if(ui->deletebox->isChecked())
    {
        QFile::remove("config.ini");
    }
    QMessageBox::information(this,"IP Set","Success!",QMessageBox::Close);
}
