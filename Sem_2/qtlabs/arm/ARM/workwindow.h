#ifndef WORKWINDOW_H
#define WORKWINDOW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
namespace Ui {
class workwindow;
}

class workwindow : public QWidget
{
    Q_OBJECT

public:
    explicit workwindow(QWidget *parent = nullptr);
    ~workwindow();

private slots:
    void on_tableView_clicked(const QModelIndex &index);

    void on_AddButton_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::workwindow *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    int currentrow;
};

#endif // WORKWINDOW_H
