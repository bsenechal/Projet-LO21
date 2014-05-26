#include "connexion.h"
#include "ui_connexion.h"
#include "dbmanager.h"
#include "inscription.h"


Connexion::Handler Connexion::handler = handler;

Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
    QObject::connect(ui->connexion, SIGNAL(clicked()), this, SLOT(connexionUser()));
}

Connexion::~Connexion()
{
    delete ui;
}


void Connexion::connexionUser() {
    QSqlDatabase db = QSqlDatabase::database();
    QString sql;
    sql.fromStdString("SELECT * FROM utilisateur where nom='" + ui->input_nom->text().toStdString() + "' and mdp='" + ui->input_mdp->text().toStdString() + "';");
    QSqlQuery query("sql", db);
    Connexion& c = Connexion::getConnexion();
    /*if (!query.exec())
            ui->label_erreur->setText("Les informations transmises n'ont pas permis\nde vous authentifier.");
    else {

        /* Traitement lorsque la connection réussie ! */
        /* Mettre la valeure dans du nom et mdp dans des variables privées de la classe user ? */

/*
        while(query.next()){
            qDebug() << query.value(0).toString();
        }
    }*/
    c.nom = "nom";
    c.mdp = "mdp";


   // this->~Connexion();
}

