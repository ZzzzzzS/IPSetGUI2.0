#include "helpwindow.h"
#include "ui_helpwindow.h"
#include "include.h"

helpwindow::helpwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helpwindow)
{
    ui->setupUi(this);
    this->setWindowTitle("IP set");
    this->setWindowModality(Qt::ApplicationModal);
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint | Qt::WindowStaysOnTopHint);
    //this->setWindowFlags(Qt::FramelessWindowHint);              //去掉标题栏
    this->setMaximumSize(360,120);                              //设置窗口最大最小大小
    this->setMinimumSize(360,120);                              //设置窗口最大最小大小

    QObject::connect(ui->okbutton,SIGNAL(clicked()),this,SLOT(close()));
    QObject::connect(ui->aboutbutton,SIGNAL(clicked()),qApp,SLOT(aboutQt()));
}

helpwindow::~helpwindow()
{
    delete ui;
}
