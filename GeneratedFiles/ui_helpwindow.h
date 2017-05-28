/********************************************************************************
** Form generated from reading UI file 'helpwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_helpwindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *aboutbutton;
    QPushButton *okbutton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *helpwindow)
    {
        if (helpwindow->objectName().isEmpty())
            helpwindow->setObjectName(QStringLiteral("helpwindow"));
        helpwindow->resize(360, 120);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font.setPointSize(9);
        helpwindow->setFont(font);
        layoutWidget = new QWidget(helpwindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 20, 77, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        aboutbutton = new QPushButton(layoutWidget);
        aboutbutton->setObjectName(QStringLiteral("aboutbutton"));

        verticalLayout->addWidget(aboutbutton);

        okbutton = new QPushButton(layoutWidget);
        okbutton->setObjectName(QStringLiteral("okbutton"));

        verticalLayout->addWidget(okbutton);

        layoutWidget1 = new QWidget(helpwindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 211, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(label_4);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setTextFormat(Qt::RichText);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setTextFormat(Qt::PlainText);

        verticalLayout_2->addWidget(label_3);


        retranslateUi(helpwindow);

        aboutbutton->setDefault(false);


        QMetaObject::connectSlotsByName(helpwindow);
    } // setupUi

    void retranslateUi(QDialog *helpwindow)
    {
        helpwindow->setWindowTitle(QApplication::translate("helpwindow", "Dialog", Q_NULLPTR));
        aboutbutton->setText(QApplication::translate("helpwindow", "\345\205\263\344\272\216QT", Q_NULLPTR));
        okbutton->setText(QApplication::translate("helpwindow", "\347\241\256\345\256\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("helpwindow", "Version:2.0", Q_NULLPTR));
        label->setText(QApplication::translate("helpwindow", "Powered By ZZS", Q_NULLPTR));
        label_2->setText(QApplication::translate("helpwindow", "All Rights Reserved\302\2512017", Q_NULLPTR));
        label_3->setText(QApplication::translate("helpwindow", "\345\274\200\346\272\220", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class helpwindow: public Ui_helpwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H
