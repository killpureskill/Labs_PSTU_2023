/********************************************************************************
** Form generated from reading UI file 'regwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGWINDOW_H
#define UI_REGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regwindow
{
public:
    QPushButton *ReturnButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *GetLogin;
    QLabel *label;
    QLineEdit *GetPass;
    QPushButton *RegBut;

    void setupUi(QWidget *regwindow)
    {
        if (regwindow->objectName().isEmpty())
            regwindow->setObjectName(QString::fromUtf8("regwindow"));
        regwindow->resize(720, 540);
        regwindow->setMinimumSize(QSize(720, 540));
        regwindow->setMaximumSize(QSize(720, 540));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(12);
        regwindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/resources/imgs/Regicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        regwindow->setWindowIcon(icon);
        regwindow->setWindowOpacity(-1.000000000000000);
        regwindow->setStyleSheet(QString::fromUtf8(""));
        ReturnButton = new QPushButton(regwindow);
        ReturnButton->setObjectName(QString::fromUtf8("ReturnButton"));
        ReturnButton->setGeometry(QRect(30, 450, 50, 50));
        ReturnButton->setMinimumSize(QSize(50, 50));
        ReturnButton->setMaximumSize(QSize(50, 50));
        ReturnButton->setFont(font);
        ReturnButton->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/resources/imgs/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReturnButton->setIcon(icon1);
        ReturnButton->setIconSize(QSize(50, 50));
        layoutWidget = new QWidget(regwindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 90, 481, 241));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(15);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        GetLogin = new QLineEdit(layoutWidget);
        GetLogin->setObjectName(QString::fromUtf8("GetLogin"));
        GetLogin->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));

        gridLayout->addWidget(GetLogin, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(14);
        label->setFont(font2);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        GetPass = new QLineEdit(layoutWidget);
        GetPass->setObjectName(QString::fromUtf8("GetPass"));
        GetPass->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));

        gridLayout->addWidget(GetPass, 1, 1, 1, 1);

        RegBut = new QPushButton(regwindow);
        RegBut->setObjectName(QString::fromUtf8("RegBut"));
        RegBut->setGeometry(QRect(560, 450, 121, 50));
        RegBut->setMinimumSize(QSize(100, 50));
        RegBut->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));

        retranslateUi(regwindow);
        QObject::connect(ReturnButton, SIGNAL(clicked()), regwindow, SLOT(close()));

        QMetaObject::connectSlotsByName(regwindow);
    } // setupUi

    void retranslateUi(QWidget *regwindow)
    {
        regwindow->setWindowTitle(QApplication::translate("regwindow", "Registration", nullptr));
        ReturnButton->setText(QApplication::translate("regwindow", "Back", nullptr));
        label_2->setText(QApplication::translate("regwindow", "Password", nullptr));
        label->setText(QApplication::translate("regwindow", "Login", nullptr));
        RegBut->setText(QApplication::translate("regwindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regwindow: public Ui_regwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGWINDOW_H
