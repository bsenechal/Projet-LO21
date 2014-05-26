#include "accueil.h"
#include "ui_accueil.h"
#include "connexion.h"
#include "inscription.h"
#include <iostream>

Accueil::Accueil(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Accueil)
{
    ui->setupUi(this);
    QObject::connect(ui->connexion_utilisateur, SIGNAL(clicked()), this, SLOT(connexionUser()));
    QObject::connect(ui->inscription, SIGNAL(clicked()), this, SLOT(inscriptionUser()));
}

Accueil::~Accueil()
{
    delete ui;
}

void Accueil::connexionUser() {
    Connexion c;
    c.exec();

}

void Accueil::inscriptionUser() {
    Inscription i;
    std::cout<<"toto";
    i.exec();
}
