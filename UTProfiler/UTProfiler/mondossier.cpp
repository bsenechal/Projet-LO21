#include "mondossier.h"
#include "ui_mondossier.h"

mondossier::mondossier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mondossier)
{
    ui->setupUi(this);
}

mondossier::~mondossier()
{
    delete ui;
}
