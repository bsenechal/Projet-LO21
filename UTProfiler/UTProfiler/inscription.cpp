#include "inscription.h"
#include "ui_inscription.h"
#include <iostream>
#include "dbmanager.h"
#include "formulaire.h"







Inscription::Inscription(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inscription)
{
    ui->setupUi(this);
    QObject::connect(ui->valider, SIGNAL(clicked()), this, SLOT(inscriptionUser()));
}

Inscription::~Inscription()
{
    delete ui;
}

void Inscription::inscriptionUser(){
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query(db);
    ui->label_erreur->setText("");


    query.exec("SELECT * FROM uv;");
    while(query.next()){
        qDebug() << query.value(1).toString();
    }

  /*  try {
        formulaire<QString>::verif_text(ui->input_login->text(), "login");
        formulaire<QString>::verif_text(ui->input_nom->text(), "nom");
        formulaire<QString>::verif_text(ui->input_prenom->text(), "prenom");
        formulaire<QString>::verif_pass(ui->input_mdp->text(), ui->input_mdp2->text());
        formulaire<QString>::verif_email(ui->input_email->text(), "email");
    }
    catch (FormulaireException e) {
        ui->label_erreur->setText(e.getinfo());
    }


    query.prepare("INSERT INTO Etudiant (login, passwd, nom, prenom, date_naissance, email, commentaires) VALUES (:login, :passwd, :nom, :prenom, :date_naiss, :email, :commentaires);");
    query.bindValue(":login", ui->input_login->text());
    query.bindValue(":passwd", ui->input_mdp->text());
    query.bindValue(":nom", ui->input_nom->text());
    query.bindValue(":prenom", ui->input_prenom->text());
    query.bindValue(":date_naiss", ui->input_date_naiss->text());
    query.bindValue(":email", ui->input_email->text());
    query.bindValue(":commentaires", ui->input_commentaires->text());

  //  query.exec();*/
}
