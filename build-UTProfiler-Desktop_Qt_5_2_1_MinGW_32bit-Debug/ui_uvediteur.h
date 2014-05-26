/********************************************************************************
** Form generated from reading UI file 'uvediteur.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UVEDITEUR_H
#define UI_UVEDITEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_UVEditeur
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UVEditeur)
    {
        if (UVEditeur->objectName().isEmpty())
            UVEditeur->setObjectName(QStringLiteral("UVEditeur"));
        UVEditeur->resize(400, 300);
        buttonBox = new QDialogButtonBox(UVEditeur);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(UVEditeur);
        QObject::connect(buttonBox, SIGNAL(accepted()), UVEditeur, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UVEditeur, SLOT(reject()));

        QMetaObject::connectSlotsByName(UVEditeur);
    } // setupUi

    void retranslateUi(QDialog *UVEditeur)
    {
        UVEditeur->setWindowTitle(QApplication::translate("UVEditeur", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class UVEditeur: public Ui_UVEditeur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UVEDITEUR_H
