#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDatabase>
#include <QDebug>
#include <QSqlRecord>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFontDatabase::addApplicationFont(":/fonts/resources/fonts/Ubuntu-Medium.ttf");
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./datab.db");
    if (db.open()){
        model = new QSqlTableModel(this, db);
        model->setTable("USERS");
        model->select();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ExitButton_clicked()
{

}

void MainWindow::on_RegButton_clicked()
{
    registrationwindow = new regwindow;
    registrationwindow->show();
}

void MainWindow::on_LoginButton_clicked()
{
    QString login = ui->GetLogin->text();
    QString password = ui->GetPassword->text();
    QSqlQuery query("SELECT * FROM USERS", db);
    int getlog = query.record().indexOf("Login");
    int getpas = query.record().indexOf("Password");
    while (query.next()) {
         QString GetLog = query.value(getlog).toString();
         QString GetPas = query.value(getpas).toString();
         if ((GetLog == login) and (GetPas == password)){
             close();
             loginwindow = new workwindow;
             loginwindow->show();
             return;
         }
    }
}
