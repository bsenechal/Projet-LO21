#ifndef LISTE_UV_H
#define LISTE_UV_H

#include <QDialog>
#include <QLabel>


namespace Ui {
class liste_uv;
}

class liste_uv : public QDialog
{
    Q_OBJECT

public:
    explicit liste_uv(QWidget *parent = 0);
    ~liste_uv();

private:
    Ui::liste_uv *ui;
};

#endif // LISTE_UV_H
