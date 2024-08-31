#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "regwindow.h"
#include "workwindow.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_ExitButton_clicked();

    void on_RegButton_clicked();

    void on_LoginButton_clicked();
private:
    Ui::MainWindow *ui;
    regwindow *registrationwindow;
    workwindow *loginwindow;
    QSqlDatabase db;
    QSqlTableModel *model;
};
#endif // MAINWINDOW_H
