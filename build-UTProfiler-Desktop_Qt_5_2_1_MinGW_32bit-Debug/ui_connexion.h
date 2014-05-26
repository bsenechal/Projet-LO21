/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Connexion
{
public:
    QLineEdit *input_nom;
    QLabel *label_nom;
    QLabel *label_mdp;
    QLineEdit *input_mdp;
    QLabel *Titre;
    QPushButton *connexion;
    QLabel *label_erreur;

    void setupUi(QDialog *Connexion)
    {
        if (Connexion->objectName().isEmpty())
            Connexion->setObjectName(QStringLiteral("Connexion"));
        Connexion->resize(400, 208);
        input_nom = new QLineEdit(Connexion);
        input_nom->setObjectName(QStringLiteral("input_nom"));
        input_nom->setGeometry(QRect(150, 70, 113, 20));
        label_nom = new QLabel(Connexion);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(50, 70, 91, 21));
        label_mdp = new QLabel(Connexion);
        label_mdp->setObjectName(QStringLiteral("label_mdp"));
        label_mdp->setGeometry(QRect(50, 100, 91, 21));
        input_mdp = new QLineEdit(Connexion);
        input_mdp->setObjectName(QStringLiteral("input_mdp"));
        input_mdp->setGeometry(QRect(150, 100, 113, 20));
        input_mdp->setEchoMode(QLineEdit::Password);
        Titre = new QLabel(Connexion);
        Titre->setObjectName(QStringLiteral("Titre"));
        Titre->setGeometry(QRect(100, 0, 201, 61));
        QFont font;
        font.setPointSize(16);
        Titre->setFont(font);
        connexion = new QPushButton(Connexion);
        connexion->setObjectName(QStringLiteral("connexion"));
        connexion->setGeometry(QRect(150, 170, 75, 23));
        label_erreur = new QLabel(Connexion);
        label_erreur->setObjectName(QStringLiteral("label_erreur"));
        label_erreur->setGeometry(QRect(50, 130, 281, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_erreur->setFont(font1);

        retranslateUi(Connexion);

        QMetaObject::connectSlotsByName(Connexion);
    } // setupUi

    void retranslateUi(QDialog *Connexion)
    {
        Connexion->setWindowTitle(QApplication::translate("Connexion", "Dialog", 0));
        label_nom->setText(QApplication::translate("Connexion", "Nom d'utilisateur : ", 0));
        label_mdp->setText(QApplication::translate("Connexion", "Mot de passe :", 0));
        Titre->setText(QApplication::translate("Connexion", "Connexion Utilisateur : ", 0));
        connexion->setText(QApplication::translate("Connexion", "Connexion", 0));
        label_erreur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Connexion: public Ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
