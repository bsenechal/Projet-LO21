#include "liste_uv.h"
#include "dbmanager.h"
#include "ui_liste_uv.h"


liste_uv::liste_uv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::liste_uv)
{
    ui->setupUi(this);


    QSqlQuery query;
    query.exec("SELECT * FROM uv;");
    while(query.next()){
        qDebug() << query.value(1).toString();
        ui->listWidget->addItem(query.value(0).toString());
    }


    ui->label->setText("toto");
}

liste_uv::~liste_uv()
{
    delete ui;
}
