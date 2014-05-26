#ifndef FORMULAIRE_H
#define FORMULAIRE_H

#include <QObject>
#include <iostream>

const int min_text = 5;
const int max_text = 50;


class FormulaireException : public std::exception {
protected :
    QString info;

public:
    FormulaireException(const QString& i="") throw() :info(i){}
    QString getinfo() const throw() { return info; }
    ~FormulaireException()throw(){}
};


template<class T> class formulaire {
protected :
    unsigned int nbElem;
public :
     static bool verif_text(const T& txt, const QString& nomchamp);
     static bool verif_pass(const T& pass1, const T& pass2 = 'xxxxx');
     static bool verif_email(const T& mail, const QString& nomchamp);

   };


template <class T> bool formulaire<T>::verif_text(const T& txt, const QString& nomchamp) {
    bool ok = true;



    if (txt.size() > max_text || txt.size() < min_text) {
        throw FormulaireException("La taille du champ '" + nomchamp + "' doit être comprise entre " + min_text + " et " + max_text + " caracteres");
        ok = false;
       }

//  QRegularExpression re("/^[a-zA-Z0-9]+([\-\_\!\?\/][a-zA-Z0-9])*/");
   // QRegularExpressionMatch match = re.match(txt);
    //if (!match.hasMatch()) {
     /*   throw FormulaireException("Veuillez correctement remplir le champ : '" + nomchamp + "' svp");
        ok = false;
    }
*/
    return ok;
}

template <class T> bool formulaire<T>::verif_pass(const T& pass1, const T& pass2) {
       bool ok = true;

       formulaire<T>::verif_text(pass1, "mot de passe");
       formulaire<T>::verif_text(pass2, "confirmation mot de passe");


        if (pass2 != "xxxxx" && pass1 != pass2) {
            throw FormulaireException("Les deux mots de passes ne correspondent pas");
            ok = false;
        }

       return ok;
}


template <class T> bool formulaire<T>::verif_email(const T& mail, const QString& nomchamp) {
       bool ok = true;

       formulaire<T>::verif_text(mail, "email");
       QRegularExpression re("^[\w|\.]+@[\w]+\.[\w]{2,4}$");
       QRegularExpressionMatch match = re.match(mail);
       if (!match.hasMatch()) {
           throw FormulaireException("Veuillez correctement remplir le champ : '" + nomchamp + "' svp");
           ok = false;
       }

       return ok;
}





#endif // FORMULAIRE_H
