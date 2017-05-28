/********************************************************************************
** Form generated from reading UI file 'settingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGWINDOW_H
#define UI_SETTINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingwindow
{
public:
    QTabWidget *tabWidget;
    QWidget *nettab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *ipline;
    QLineEdit *maskline;
    QLineEdit *gateline;
    QLineEdit *dnsline;
    QWidget *wifitab;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *Wipline;
    QLineEdit *Wmaskline;
    QLineEdit *Wgateline;
    QLineEdit *Wdnsline;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpbutton;
    QPushButton *savebutton;
    QPushButton *cancelbutton;

    void setupUi(QDialog *settingwindow)
    {
        if (settingwindow->objectName().isEmpty())
            settingwindow->setObjectName(QStringLiteral("settingwindow"));
        settingwindow->resize(360, 180);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        settingwindow->setFont(font);
        tabWidget = new QTabWidget(settingwindow);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 360, 141));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        nettab = new QWidget();
        nettab->setObjectName(QStringLiteral("nettab"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nettab->sizePolicy().hasHeightForWidth());
        nettab->setSizePolicy(sizePolicy1);
        nettab->setAutoFillBackground(false);
        layoutWidget = new QWidget(nettab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 341, 111));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        ipline = new QLineEdit(layoutWidget);
        ipline->setObjectName(QStringLiteral("ipline"));

        verticalLayout_3->addWidget(ipline);

        maskline = new QLineEdit(layoutWidget);
        maskline->setObjectName(QStringLiteral("maskline"));

        verticalLayout_3->addWidget(maskline);

        gateline = new QLineEdit(layoutWidget);
        gateline->setObjectName(QStringLiteral("gateline"));

        verticalLayout_3->addWidget(gateline);

        dnsline = new QLineEdit(layoutWidget);
        dnsline->setObjectName(QStringLiteral("dnsline"));

        verticalLayout_3->addWidget(dnsline);


        horizontalLayout_2->addLayout(verticalLayout_3);

        tabWidget->addTab(nettab, QString());
        wifitab = new QWidget();
        wifitab->setObjectName(QStringLiteral("wifitab"));
        layoutWidget1 = new QWidget(wifitab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 341, 111));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Wipline = new QLineEdit(layoutWidget1);
        Wipline->setObjectName(QStringLiteral("Wipline"));

        verticalLayout_4->addWidget(Wipline);

        Wmaskline = new QLineEdit(layoutWidget1);
        Wmaskline->setObjectName(QStringLiteral("Wmaskline"));

        verticalLayout_4->addWidget(Wmaskline);

        Wgateline = new QLineEdit(layoutWidget1);
        Wgateline->setObjectName(QStringLiteral("Wgateline"));

        verticalLayout_4->addWidget(Wgateline);

        Wdnsline = new QLineEdit(layoutWidget1);
        Wdnsline->setObjectName(QStringLiteral("Wdnsline"));

        verticalLayout_4->addWidget(Wdnsline);


        horizontalLayout_3->addLayout(verticalLayout_4);

        tabWidget->addTab(wifitab, QString());
        layoutWidget2 = new QWidget(settingwindow);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 150, 341, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        helpbutton = new QPushButton(layoutWidget2);
        helpbutton->setObjectName(QStringLiteral("helpbutton"));
        helpbutton->setEnabled(true);
        helpbutton->setCheckable(false);
        helpbutton->setAutoDefault(false);
        helpbutton->setFlat(false);

        horizontalLayout->addWidget(helpbutton);

        savebutton = new QPushButton(layoutWidget2);
        savebutton->setObjectName(QStringLiteral("savebutton"));

        horizontalLayout->addWidget(savebutton);

        cancelbutton = new QPushButton(layoutWidget2);
        cancelbutton->setObjectName(QStringLiteral("cancelbutton"));

        horizontalLayout->addWidget(cancelbutton);


        retranslateUi(settingwindow);

        tabWidget->setCurrentIndex(1);
        helpbutton->setDefault(false);


        QMetaObject::connectSlotsByName(settingwindow);
    } // setupUi

    void retranslateUi(QDialog *settingwindow)
    {
        settingwindow->setWindowTitle(QApplication::translate("settingwindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("settingwindow", "ip\345\234\260\345\235\200:", Q_NULLPTR));
        label_2->setText(QApplication::translate("settingwindow", "\345\255\220\347\275\221\346\216\251\347\240\201:", Q_NULLPTR));
        label_3->setText(QApplication::translate("settingwindow", "\347\275\221\345\205\263:", Q_NULLPTR));
        label_4->setText(QApplication::translate("settingwindow", "DNS\357\274\232", Q_NULLPTR));
        maskline->setText(QApplication::translate("settingwindow", "255.255.255.0", Q_NULLPTR));
        dnsline->setText(QApplication::translate("settingwindow", "114.114.114.114", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(nettab), QApplication::translate("settingwindow", "\345\212\236\345\205\254\345\214\272", Q_NULLPTR));
        label_5->setText(QApplication::translate("settingwindow", "ip\345\234\260\345\235\200:", Q_NULLPTR));
        label_6->setText(QApplication::translate("settingwindow", "\345\255\220\347\275\221\346\216\251\347\240\201:", Q_NULLPTR));
        label_7->setText(QApplication::translate("settingwindow", "\347\275\221\345\205\263:", Q_NULLPTR));
        label_8->setText(QApplication::translate("settingwindow", "DNS\357\274\232", Q_NULLPTR));
        Wmaskline->setText(QApplication::translate("settingwindow", "255.255.255.0", Q_NULLPTR));
        Wdnsline->setText(QApplication::translate("settingwindow", "114.114.114.114", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(wifitab), QApplication::translate("settingwindow", "\345\256\277\350\210\215\345\214\272", Q_NULLPTR));
        helpbutton->setText(QApplication::translate("settingwindow", "\345\270\256\345\212\251", Q_NULLPTR));
        savebutton->setText(QApplication::translate("settingwindow", "\344\277\235\345\255\230", Q_NULLPTR));
        cancelbutton->setText(QApplication::translate("settingwindow", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settingwindow: public Ui_settingwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGWINDOW_H
