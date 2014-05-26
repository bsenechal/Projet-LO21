/********************************************************************************
** Form generated from reading UI file 'mondossier.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONDOSSIER_H
#define UI_MONDOSSIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mondossier
{
public:
    QTabWidget *tabwidget;
    QWidget *tab;
    QWidget *tab_info_perso;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *mondossier)
    {
        if (mondossier->objectName().isEmpty())
            mondossier->setObjectName(QStringLiteral("mondossier"));
        mondossier->resize(400, 300);
        tabwidget = new QTabWidget(mondossier);
        tabwidget->setObjectName(QStringLiteral("tabwidget"));
        tabwidget->setGeometry(QRect(0, 0, 401, 301));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabwidget->addTab(tab, QString());
        tab_info_perso = new QWidget();
        tab_info_perso->setObjectName(QStringLiteral("tab_info_perso"));
        gridLayoutWidget = new QWidget(tab_info_perso);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(110, 60, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        tabwidget->addTab(tab_info_perso, QString());

        retranslateUi(mondossier);

        tabwidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mondossier);
    } // setupUi

    void retranslateUi(QDialog *mondossier)
    {
        mondossier->setWindowTitle(QApplication::translate("mondossier", "Dialog", 0));
        tabwidget->setTabText(tabwidget->indexOf(tab), QApplication::translate("mondossier", "Tab 1", 0));
        label_2->setText(QApplication::translate("mondossier", "Nom", 0));
        label->setText(QApplication::translate("mondossier", "Login", 0));
        label_3->setText(QApplication::translate("mondossier", "Pr\303\251nom", 0));
        tabwidget->setTabText(tabwidget->indexOf(tab_info_perso), QApplication::translate("mondossier", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class mondossier: public Ui_mondossier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONDOSSIER_H
