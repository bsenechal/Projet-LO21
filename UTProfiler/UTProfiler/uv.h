#ifndef UV_H
#define UV_H

#include "categorie.h"
#include "utprofilerexception.h"
#include <QString>
#include <QTextStream>

class UV
{
private :
      QString code;
      QString titre;
      unsigned int nbCredits;
      Categorie categorie;
      bool automne;
      bool printemps;
      UV(const UV& u);
      UV& operator=(const UV& u);
      UV(const QString& c, const QString& t, unsigned int nbc, Categorie cat, bool a, bool p):
        code(c),titre(t),nbCredits(nbc),categorie(cat),automne(a),printemps(p){}
      friend class UVManager;
public:
      QString getCode() const { return code; }
      QString getTitre() const { return titre; }
      unsigned int getNbCredits() const { return nbCredits; }
      Categorie getCategorie() const { return categorie; }
      bool ouvertureAutomne() const { return automne; }
      bool ouverturePrintemps() const { return printemps; }
      void setCode(const QString& c) { code=c; }
      void setTitre(const QString& t) { titre=t; }
      void setNbCredits(unsigned int n) { nbCredits=n; }
      void setCategorie(Categorie c) { categorie=c; }
      void setOuvertureAutomne(bool b) { automne=b; }
      void setOuverturePrintemps(bool b) { printemps=b; }
};

#endif // UV_H
