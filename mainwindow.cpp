#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "include.h"
#include <windows.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("IP set");
    this->setWindowFlags(Qt::FramelessWindowHint);              //去掉标题栏
    this->setMaximumSize(360,120);                              //设置窗口最大最小大小
    this->setMinimumSize(360,120);                              //设置窗口最大最小大小

    Set_Slots();                                                //设置信号槽
    ui->NetButton->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Set_Slots()                                    //信号槽设置函数
{
    QObject::connect(ui->QuitButton,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(ui->OfficeButton,SIGNAL(clicked()),this,SLOT(OfficeSlot()));
    QObject::connect(ui->DomitoryButton,SIGNAL(clicked()),this,SLOT(DomitorySlot()));
    QObject::connect(ui->SettingButton,SIGNAL(clicked()),this,SLOT(SettingSlot()));
}

void MainWindow::Set_RadioButton()                              //按钮设置函数
{
    NetWork=new QButtonGroup(this);
    NetWork->addButton(ui->NetButton,0);
    NetWork->addButton(ui->WifiButton,1);

    ui->NetButton->setChecked(true);
}

void MainWindow::OfficeSlot()
{
    QSettings *IniRead=new QSettings("config.ini", QSettings::IniFormat);
    if (ui->NetButton->isChecked())
	{
        QString read;

        read=IniRead->value("Office/ip").toString();
        std::string str1=read.toStdString();
        const char *ip=str1.c_str();

        read=IniRead->value("Office/subnet_mask").toString();
        std::string str2=read.toStdString();
        const char *subnet_mask=str2.c_str();

        read=IniRead->value("Office/Gateway").toString();
        std::string str3=read.toStdString();
        const char *Gateway=str3.c_str();

        char write[100];
        sprintf(write,"netsh interface ip set address \"以太网\" static %s %s %s",ip,subnet_mask,Gateway);
        system(write);

        read=IniRead->value("Office/DNS").toString();
        std::string str4=read.toStdString();
        const char *DNS=str4.c_str();
        sprintf(write,"netsh interface ip set dns \"以太网\" static %s",DNS);
        system(write);
	}
    else if(ui->WifiButton->isChecked())
    {
        QString read;

        read=IniRead->value("Office/ip").toString();
        std::string str1=read.toStdString();
        const char *ip=str1.c_str();

        read=IniRead->value("Office/subnet_mask").toString();
        std::string str2=read.toStdString();
        const char *subnet_mask=str2.c_str();

        read=IniRead->value("Office/Gateway").toString();
        std::string str3=read.toStdString();
        const char *Gateway=str3.c_str();

        char write[100];
        sprintf(write,"netsh interface ip set address \"WLAN\" static %s %s %s",ip,subnet_mask,Gateway);
        system(write);

        read=IniRead->value("Office/DNS").toString();
        std::string str4=read.toStdString();
        const char *DNS=str4.c_str();
        sprintf(write,"netsh interface ip set dns \"WLAN\" static %s",DNS);
        system(write);
    }

    if(IniRead->value("Drcom/Lunch").toString()=="true")
    {
        QString test=IniRead->value("Drcom/Drcom").toString();
        QProcess::startDetached(test);
        this->close();
    }
    delete IniRead;
}

void MainWindow::DomitorySlot()
{
    QSettings *IniRead=new QSettings("config.ini", QSettings::IniFormat);
    if(ui->NetButton->isChecked())
    {
        QString read;

        read=IniRead->value("Domitory/ip").toString();
        std::string str1=read.toStdString();
        const char *ip=str1.c_str();

        read=IniRead->value("Domitory/subnet_mask").toString();
        std::string str2=read.toStdString();
        const char *subnet_mask=str2.c_str();

        read=IniRead->value("Domitory/Gateway").toString();
        std::string str3=read.toStdString();
        const char *Gateway=str3.c_str();

        char write[100];
        sprintf(write,"netsh interface ip set address \"以太网\" static %s %s %s",ip,subnet_mask,Gateway);
        system(write);

        read=IniRead->value("Domitory/DNS").toString();
        std::string str4=read.toStdString();
        const char *DNS=str4.c_str();
        sprintf(write,"netsh interface ip set dns \"以太网\" static %s",DNS);
        system(write);

    }
    else if(ui->WifiButton->isChecked())
    {
        QString read;

        read=IniRead->value("Domitory/ip").toString();
        std::string str1=read.toStdString();
        const char *ip=str1.c_str();

        read=IniRead->value("Domitory/subnet_mask").toString();
        std::string str2=read.toStdString();
        const char *subnet_mask=str2.c_str();

        read=IniRead->value("Domitory/Gateway").toString();
        std::string str3=read.toStdString();
        const char *Gateway=str3.c_str();

        char write[100];
        sprintf(write,"netsh interface ip set address \"WLAN\" static %s %s %s",ip,subnet_mask,Gateway);
        system(write);

        read=IniRead->value("Domitory/DNS").toString();
        std::string str4=read.toStdString();
        const char *DNS=str4.c_str();
        sprintf(write,"netsh interface ip set dns \"WLAN\" static %s",DNS);
        system(write);
    }

    if(IniRead->value("Drcom/Lunch").toString()=="true")
    {
        QString test=IniRead->value("Drcom/Drcom").toString();
        QProcess::startDetached(test);
        this->close();
    }
    delete IniRead;
}

void MainWindow::SettingSlot()
{
    settingwindow setting;
    setting.show();
    setting.exec();
}
