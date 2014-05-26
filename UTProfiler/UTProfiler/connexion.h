#ifndef CONNEXION_H
#define CONNEXION_H

#include <QDialog>

namespace Ui {
class Connexion;
}

class Connexion : public QDialog
{
    Q_OBJECT

private:
    Ui::Connexion *ui;
    QString nom;
    QString mdp;

    Connexion& operator=(const Connexion& db);
    Connexion(const Connexion& db);
    struct Handler{
        Connexion* instanceUnique;
        Handler():instanceUnique(0){}
        ~Handler(){delete instanceUnique;}
    };


public:
    explicit Connexion(QWidget *parent = 0);
    static Handler handler;
    bool isConnected() const { return !(nom.isNull() && mdp.isNull()); }
    void setNom(QString n) { this->nom = n;}
    void setMdp(QString m) { this->mdp = m;}
    QString getNom() { return this->nom; }
    QString getMdp() { return this->mdp; }
    ~Connexion();

    static Connexion& getConnexion() {
          if (handler.instanceUnique == 0)
                  handler.instanceUnique = new Connexion();
          return *handler.instanceUnique;
    }
    static void libererConnexion(){
         delete handler.instanceUnique;
         handler.instanceUnique = 0;
    }

public slots:
     void connexionUser();
};

#endif // CONNEXION_H
