#ifndef MONDOSSIER_H
#define MONDOSSIER_H

#include <QDialog>

namespace Ui {
class mondossier;
}

class mondossier : public QDialog
{
    Q_OBJECT

public:
    explicit mondossier(QWidget *parent = 0);
    ~mondossier();

private:
    Ui::mondossier *ui;
};

#endif // MONDOSSIER_H
