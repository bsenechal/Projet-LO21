#include "dbmanager.h"
#include <QFileDialog>
#include <QCoreApplication>



dbmanager::Handler dbmanager::handler = handler;


dbmanager::dbmanager() {
    this->db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("UTProfiler BDD");

    std::cout << QDir::currentPath().toStdString();
    db.setDatabaseName("../UTProfiler/BDD/UTProfiler");
}


bool dbmanager::openDB()
    {
    bool ok = db.open();
    if(ok)
       qDebug() << "Vous êtes maintenant connecté à " << db.hostName() <<"\n";

    else
       qDebug() << "La connexion "<< db.hostName() << "a échouée\n" ;

    return ok;
    }


void dbmanager::closeDB() { db.close(); }


