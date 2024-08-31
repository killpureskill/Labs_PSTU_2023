#include "workwindow.h"
#include "ui_workwindow.h"

workwindow::workwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::workwindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./datab.db");
    if (db.open()){
        model = new QSqlTableModel(this, db);
        model->setTable("CARS");
        model->select();
        ui->tableView->setModel(model);
    }
}

workwindow::~workwindow()
{
    delete ui;
}

void workwindow::on_AddButton_clicked()
{
     model->insertRow(model->rowCount());
}


void workwindow::on_DeleteButton_clicked()
{
    model->removeRow(currentrow);
    model->select();
}


void workwindow::on_tableView_clicked(const QModelIndex &index)
{
    currentrow = index.row();
}
