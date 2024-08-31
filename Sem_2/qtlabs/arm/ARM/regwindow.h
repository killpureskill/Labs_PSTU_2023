#ifndef REGWINDOW_H
#define REGWINDOW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>

namespace Ui {
class regwindow;
}

class regwindow : public QWidget
{
    Q_OBJECT

public:
    explicit regwindow(QWidget *parent = nullptr);
    ~regwindow();
private slots:
    void on_RegBut_clicked();
private:
    Ui::regwindow *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
};

#endif // REGWINDOW_H
