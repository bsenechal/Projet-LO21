#include "uvediteur.h"
#include "ui_uvediteur.h"

UVEditeur::UVEditeur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UVEditeur)
{
    ui->setupUi(this);
}

UVEditeur::~UVEditeur()
{
    delete ui;
}
