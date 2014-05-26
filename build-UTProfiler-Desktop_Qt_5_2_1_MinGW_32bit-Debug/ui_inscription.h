/********************************************************************************
** Form generated from reading UI file 'inscription.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSCRIPTION_H
#define UI_INSCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Inscription
{
public:
    QLabel *label_login;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLabel *label_mdp1;
    QLabel *label_mdp2;
    QLabel *label_sexe;
    QLineEdit *input_login;
    QLineEdit *input_nom;
    QLineEdit *input_prenom;
    QLineEdit *input_mdp;
    QLineEdit *input_mdp2;
    QLabel *label_titre;
    QComboBox *comboBox;
    QPushButton *valider;
    QLabel *label_email;
    QLineEdit *input_email;
    QLabel *label_commentaires;
    QLineEdit *input_commentaires;
    QLabel *label_datenaiss;
    QLineEdit *input_date_naiss;
    QLabel *label_erreur;

    void setupUi(QDialog *Inscription)
    {
        if (Inscription->objectName().isEmpty())
            Inscription->setObjectName(QStringLiteral("Inscription"));
        Inscription->resize(400, 480);
        label_login = new QLabel(Inscription);
        label_login->setObjectName(QStringLiteral("label_login"));
        label_login->setGeometry(QRect(60, 60, 46, 13));
        label_nom = new QLabel(Inscription);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(60, 90, 46, 13));
        label_prenom = new QLabel(Inscription);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));
        label_prenom->setGeometry(QRect(60, 120, 46, 13));
        label_mdp1 = new QLabel(Inscription);
        label_mdp1->setObjectName(QStringLiteral("label_mdp1"));
        label_mdp1->setGeometry(QRect(60, 190, 46, 13));
        label_mdp2 = new QLabel(Inscription);
        label_mdp2->setObjectName(QStringLiteral("label_mdp2"));
        label_mdp2->setGeometry(QRect(60, 220, 46, 13));
        label_sexe = new QLabel(Inscription);
        label_sexe->setObjectName(QStringLiteral("label_sexe"));
        label_sexe->setGeometry(QRect(60, 140, 46, 13));
        input_login = new QLineEdit(Inscription);
        input_login->setObjectName(QStringLiteral("input_login"));
        input_login->setGeometry(QRect(130, 60, 113, 20));
        input_nom = new QLineEdit(Inscription);
        input_nom->setObjectName(QStringLiteral("input_nom"));
        input_nom->setGeometry(QRect(130, 90, 113, 20));
        input_prenom = new QLineEdit(Inscription);
        input_prenom->setObjectName(QStringLiteral("input_prenom"));
        input_prenom->setGeometry(QRect(130, 110, 113, 20));
        input_mdp = new QLineEdit(Inscription);
        input_mdp->setObjectName(QStringLiteral("input_mdp"));
        input_mdp->setGeometry(QRect(130, 190, 113, 20));
        input_mdp2 = new QLineEdit(Inscription);
        input_mdp2->setObjectName(QStringLiteral("input_mdp2"));
        input_mdp2->setGeometry(QRect(130, 220, 113, 20));
        label_titre = new QLabel(Inscription);
        label_titre->setObjectName(QStringLiteral("label_titre"));
        label_titre->setGeometry(QRect(100, 10, 91, 31));
        comboBox = new QComboBox(Inscription);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 140, 69, 22));
        valider = new QPushButton(Inscription);
        valider->setObjectName(QStringLiteral("valider"));
        valider->setGeometry(QRect(150, 400, 75, 23));
        label_email = new QLabel(Inscription);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setGeometry(QRect(60, 250, 46, 13));
        input_email = new QLineEdit(Inscription);
        input_email->setObjectName(QStringLiteral("input_email"));
        input_email->setGeometry(QRect(130, 250, 113, 20));
        input_email->setEchoMode(QLineEdit::Normal);
        label_commentaires = new QLabel(Inscription);
        label_commentaires->setObjectName(QStringLiteral("label_commentaires"));
        label_commentaires->setGeometry(QRect(60, 280, 46, 13));
        input_commentaires = new QLineEdit(Inscription);
        input_commentaires->setObjectName(QStringLiteral("input_commentaires"));
        input_commentaires->setGeometry(QRect(130, 280, 151, 61));
        input_commentaires->setEchoMode(QLineEdit::Normal);
        label_datenaiss = new QLabel(Inscription);
        label_datenaiss->setObjectName(QStringLiteral("label_datenaiss"));
        label_datenaiss->setGeometry(QRect(60, 160, 46, 13));
        input_date_naiss = new QLineEdit(Inscription);
        input_date_naiss->setObjectName(QStringLiteral("input_date_naiss"));
        input_date_naiss->setGeometry(QRect(130, 160, 113, 20));
        label_erreur = new QLabel(Inscription);
        label_erreur->setObjectName(QStringLiteral("label_erreur"));
        label_erreur->setGeometry(QRect(50, 350, 301, 41));

        retranslateUi(Inscription);

        QMetaObject::connectSlotsByName(Inscription);
    } // setupUi

    void retranslateUi(QDialog *Inscription)
    {
        Inscription->setWindowTitle(QApplication::translate("Inscription", "Dialog", 0));
        label_login->setText(QApplication::translate("Inscription", "Login", 0));
        label_nom->setText(QApplication::translate("Inscription", "Nom", 0));
        label_prenom->setText(QApplication::translate("Inscription", "Pr\303\251nom", 0));
        label_mdp1->setText(QApplication::translate("Inscription", "Mot de passe", 0));
        label_mdp2->setText(QApplication::translate("Inscription", "Confirmez votre mot de passe", 0));
        label_sexe->setText(QApplication::translate("Inscription", "Sexe", 0));
        label_titre->setText(QApplication::translate("Inscription", "Inscription", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Inscription", "Homme", 0)
         << QApplication::translate("Inscription", "Femme", 0)
        );
        valider->setText(QApplication::translate("Inscription", "Valider", 0));
        label_email->setText(QApplication::translate("Inscription", "Email", 0));
        label_commentaires->setText(QApplication::translate("Inscription", "Commentaires", 0));
        label_datenaiss->setText(QApplication::translate("Inscription", "Date de naissance", 0));
        label_erreur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Inscription: public Ui_Inscription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSCRIPTION_H
