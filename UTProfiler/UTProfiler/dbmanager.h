#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QObject>
#include <qtsql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <qtsql/QSqlError>
#include <iostream>
#include <QDebug>
#include <QFile>
#include <QDebug>
#include <QString>
#include <QCoreApplication>
#include <QtSql/QSql>

class dbmanager {
private:
    QSqlDatabase db;
    dbmanager& operator=(const dbmanager& db);
    dbmanager(const dbmanager& db);         /* Le fait de déclarer le constructeur de recopie privé permet d'empêcher la création du constructeur de recopie par défaut */

    struct Handler{
        dbmanager* instanceUnique;
        Handler():instanceUnique(0){}
        ~Handler(){delete instanceUnique;}
    };

public:
    static Handler handler;
    bool openDB();
    void closeDB();
    QSqlError lastError();

    dbmanager();


    static dbmanager& getdbmanager() {
          if (handler.instanceUnique == 0)
                  handler.instanceUnique = new dbmanager();
          return *handler.instanceUnique;
    }
    static void libererManager(){
         delete handler.instanceUnique;
         handler.instanceUnique = 0;
    }

};

#endif // DBMANAGER_H
