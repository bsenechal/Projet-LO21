#ifndef UVEDITEUR_H
#define UVEDITEUR_H

#include <QDialog>

namespace Ui {
class UVEditeur;
}

class UVEditeur : public QDialog
{
    Q_OBJECT

public:
    explicit UVEditeur(QWidget *parent = 0);
    ~UVEditeur();

private:
    Ui::UVEditeur *ui;
};

#endif // UVEDITEUR_H
