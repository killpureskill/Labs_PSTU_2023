/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *LoginButton;
    QPushButton *RegButton;
    QPushButton *ExitButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *LoginToken;
    QLabel *PasswordToken;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *GetLogin;
    QLineEdit *GetPassword;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(11);
        MainWindow->setFont(font);
        MainWindow->setToolTipDuration(-4);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(400, 0));
        centralwidget->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(15);
        LoginButton->setFont(font1);
        LoginButton->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));

        verticalLayout_2->addWidget(LoginButton);

        RegButton = new QPushButton(centralwidget);
        RegButton->setObjectName(QString::fromUtf8("RegButton"));
        RegButton->setFont(font1);
        RegButton->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));

        verticalLayout_2->addWidget(RegButton);

        ExitButton = new QPushButton(centralwidget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setFont(font1);
        ExitButton->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));

        verticalLayout_2->addWidget(ExitButton);


        gridLayout->addLayout(verticalLayout_2, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        LoginToken = new QLabel(centralwidget);
        LoginToken->setObjectName(QString::fromUtf8("LoginToken"));
        LoginToken->setFont(font1);
        LoginToken->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(LoginToken);

        PasswordToken = new QLabel(centralwidget);
        PasswordToken->setObjectName(QString::fromUtf8("PasswordToken"));
        PasswordToken->setFont(font1);
        PasswordToken->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(PasswordToken);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        GetLogin = new QLineEdit(centralwidget);
        GetLogin->setObjectName(QString::fromUtf8("GetLogin"));
        GetLogin->setMinimumSize(QSize(400, 0));
        GetLogin->setMaximumSize(QSize(1000, 200));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(18);
        GetLogin->setFont(font2);
        GetLogin->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));
        GetLogin->setMaxLength(20);

        verticalLayout_3->addWidget(GetLogin);

        GetPassword = new QLineEdit(centralwidget);
        GetPassword->setObjectName(QString::fromUtf8("GetPassword"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GetPassword->sizePolicy().hasHeightForWidth());
        GetPassword->setSizePolicy(sizePolicy);
        GetPassword->setMaximumSize(QSize(16777215, 50));
        GetPassword->setFont(font2);
        GetPassword->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));
        GetPassword->setMaxLength(20);

        verticalLayout_3->addWidget(GetPassword);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menubar->setBaseSize(QSize(0, 0));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(ExitButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ARM", nullptr));
        LoginButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        RegButton->setText(QApplication::translate("MainWindow", "Registration", nullptr));
        ExitButton->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        LoginToken->setText(QApplication::translate("MainWindow", "Login", nullptr));
        PasswordToken->setText(QApplication::translate("MainWindow", "Password", nullptr));
        GetLogin->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
