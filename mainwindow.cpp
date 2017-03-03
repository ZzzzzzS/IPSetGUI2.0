﻿#include "mainwindow.h"
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
        const QHostAddress addr(IniRead->value("Office/ip").toString());
        //QNetworkAddressEntry::setIp(&addr);
        QNetworkAddressEntry Entry;
        Entry.setIp(addr);

	}




}

void MainWindow::DomitorySlot()
{
    if(ui->NetButton->isChecked())
        QMessageBox::information(this,tr("test"),"domi Net",QMessageBox::Close);
    else if(ui->WifiButton->isChecked())
        QMessageBox::information(this,tr("test"),"domi wifi",QMessageBox::Close);
}

void MainWindow::SettingSlot()
{
    settingwindow setting;
    setting.show();
    setting.exec();
    //QMessageBox::information(this,tr("test"),"domi wifi",QMessageBox::Close);
}
