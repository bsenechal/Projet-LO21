#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QDialog>

namespace Ui {
class Inscription;
}

class Inscription : public QDialog
{
    Q_OBJECT

public:
    explicit Inscription(QWidget *parent = 0);
    ~Inscription();

private:
    Ui::Inscription *ui;

public slots :
    void inscriptionUser();
};

#endif // INSCRIPTION_H
