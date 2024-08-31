#include "regwindow.h"
#include "ui_regwindow.h"

regwindow::regwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regwindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./datab.db");
    if (db.open()){
        model = new QSqlTableModel(this, db);
        model->setTable("USERS");
        model->select();
    }
}

regwindow::~regwindow()
{
    delete ui;
}

void regwindow::on_RegBut_clicked()
{
    QString login = ui->GetLogin->text();
    QString password = ui->GetPass->text();

    if (login != "" and password != "" ){
        model->insertRow(model->rowCount());
        QSqlQuery query;
        query.prepare("INSERT INTO USERS (Login, Password, AccessRights) "
                           "VALUES (:Login, :Password, 0)");
        query.bindValue(":Login", login);
        query.bindValue(":Password", password);
        query.exec();
        close();
    }
}
