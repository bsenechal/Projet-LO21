/********************************************************************************
** Form generated from reading UI file 'liste_uv.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTE_UV_H
#define UI_LISTE_UV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_liste_uv
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *liste_uv)
    {
        if (liste_uv->objectName().isEmpty())
            liste_uv->setObjectName(QStringLiteral("liste_uv"));
        liste_uv->resize(400, 300);
        buttonBox = new QDialogButtonBox(liste_uv);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(liste_uv);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 46, 13));
        listWidget = new QListWidget(liste_uv);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(90, 30, 256, 192));

        retranslateUi(liste_uv);
        QObject::connect(buttonBox, SIGNAL(accepted()), liste_uv, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), liste_uv, SLOT(reject()));

        QMetaObject::connectSlotsByName(liste_uv);
    } // setupUi

    void retranslateUi(QDialog *liste_uv)
    {
        liste_uv->setWindowTitle(QApplication::translate("liste_uv", "Dialog", 0));
        label->setText(QApplication::translate("liste_uv", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class liste_uv: public Ui_liste_uv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTE_UV_H
