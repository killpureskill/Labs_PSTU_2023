/********************************************************************************
** Form generated from reading UI file 'workwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKWINDOW_H
#define UI_WORKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workwindow
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QPushButton *AddButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *DeleteButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;

    void setupUi(QWidget *workwindow)
    {
        if (workwindow->objectName().isEmpty())
            workwindow->setObjectName(QString::fromUtf8("workwindow"));
        workwindow->resize(900, 580);
        workwindow->setMinimumSize(QSize(900, 580));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(12);
        workwindow->setFont(font);
        workwindow->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(workwindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(233, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer_3, 4, 1, 1, 1);

        AddButton = new QPushButton(workwindow);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));

        gridLayout->addWidget(AddButton, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer_2, 1, 3, 1, 1);

        DeleteButton = new QPushButton(workwindow);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));
        DeleteButton->setStyleSheet(QString::fromUtf8("background-color:#D7D7D7;"));

        gridLayout->addWidget(DeleteButton, 2, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer_4, 4, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(213, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(233, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        tableView = new QTableView(workwindow);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("background-color: #FFF;"));

        gridLayout->addWidget(tableView, 0, 0, 1, 5);


        retranslateUi(workwindow);

        QMetaObject::connectSlotsByName(workwindow);
    } // setupUi

    void retranslateUi(QWidget *workwindow)
    {
        workwindow->setWindowTitle(QApplication::translate("workwindow", "\320\220\320\240\320\234", nullptr));
        AddButton->setText(QApplication::translate("workwindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        DeleteButton->setText(QApplication::translate("workwindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workwindow: public Ui_workwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKWINDOW_H
