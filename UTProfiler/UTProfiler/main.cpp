#include "liste_uv.h"
#include "dbmanager.h"
#include <QApplication>
#include "connexion.h"
#include "accueil.h"
#include "mondossier.h"


int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    dbmanager* db = new dbmanager();
    db->openDB();
    Connexion c;
    Accueil a;
    mondossier m;

    liste_uv l;

    a.show();


    db->closeDB();
    return app.exec();


}
