/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *NetButton;
    QRadioButton *WifiButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QPushButton *OfficeButton;
    QPushButton *DomitoryButton;
    QGridLayout *gridLayout_3;
    QPushButton *SettingButton;
    QPushButton *QuitButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(360, 120);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(false);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 341, 27));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        NetButton = new QRadioButton(layoutWidget);
        NetButton->setObjectName(QStringLiteral("NetButton"));

        gridLayout->addWidget(NetButton, 0, 0, 1, 1);

        WifiButton = new QRadioButton(layoutWidget);
        WifiButton->setObjectName(QStringLiteral("WifiButton"));

        gridLayout->addWidget(WifiButton, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 341, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        OfficeButton = new QPushButton(layoutWidget1);
        OfficeButton->setObjectName(QStringLiteral("OfficeButton"));

        gridLayout_2->addWidget(OfficeButton, 0, 0, 1, 1);

        DomitoryButton = new QPushButton(layoutWidget1);
        DomitoryButton->setObjectName(QStringLiteral("DomitoryButton"));

        gridLayout_2->addWidget(DomitoryButton, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        SettingButton = new QPushButton(layoutWidget1);
        SettingButton->setObjectName(QStringLiteral("SettingButton"));

        gridLayout_3->addWidget(SettingButton, 0, 0, 1, 1);

        QuitButton = new QPushButton(layoutWidget1);
        QuitButton->setObjectName(QStringLiteral("QuitButton"));

        gridLayout_3->addWidget(QuitButton, 1, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_3);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        NetButton->setText(QApplication::translate("MainWindow", "\344\273\245\345\244\252\347\275\221", Q_NULLPTR));
        WifiButton->setText(QApplication::translate("MainWindow", "\346\227\240\347\272\277\345\261\200\345\237\237\347\275\221", Q_NULLPTR));
        OfficeButton->setText(QApplication::translate("MainWindow", "\345\212\236\345\205\254\345\214\272", Q_NULLPTR));
        DomitoryButton->setText(QApplication::translate("MainWindow", "\345\256\277\350\210\215\345\214\272", Q_NULLPTR));
        SettingButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
        QuitButton->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
