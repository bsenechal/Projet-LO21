/********************************************************************************
** Form generated from reading UI file 'accueil.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCUEIL_H
#define UI_ACCUEIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accueil
{
public:
    QWidget *centralwidget;
    QPushButton *connexion_utilisateur;
    QLabel *label;
    QPushButton *inscription;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Accueil)
    {
        if (Accueil->objectName().isEmpty())
            Accueil->setObjectName(QStringLiteral("Accueil"));
        Accueil->resize(800, 600);
        centralwidget = new QWidget(Accueil);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        connexion_utilisateur = new QPushButton(centralwidget);
        connexion_utilisateur->setObjectName(QStringLiteral("connexion_utilisateur"));
        connexion_utilisateur->setGeometry(QRect(140, 110, 111, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 20, 191, 51));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        inscription = new QPushButton(centralwidget);
        inscription->setObjectName(QStringLiteral("inscription"));
        inscription->setGeometry(QRect(140, 150, 111, 31));
        Accueil->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Accueil);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Accueil->setMenuBar(menubar);
        statusbar = new QStatusBar(Accueil);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Accueil->setStatusBar(statusbar);

        retranslateUi(Accueil);

        QMetaObject::connectSlotsByName(Accueil);
    } // setupUi

    void retranslateUi(QMainWindow *Accueil)
    {
        Accueil->setWindowTitle(QApplication::translate("Accueil", "MainWindow", 0));
        connexion_utilisateur->setText(QApplication::translate("Accueil", "Connexion Utilisateur", 0));
        label->setText(QApplication::translate("Accueil", "UT Profiler", 0));
        inscription->setText(QApplication::translate("Accueil", "Inscription", 0));
    } // retranslateUi

};

namespace Ui {
    class Accueil: public Ui_Accueil {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCUEIL_H
