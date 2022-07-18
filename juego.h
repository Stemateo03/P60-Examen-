#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow
{
    Q_OBJECT

public:
    Juego(QWidget *parent = nullptr);
    ~Juego();

private slots:
    void on_btnArriba_released();

    void on_btnAbajo_released();

    void on_btnIzqueirda_released();

    void on_btnDerecha_released();

private:
    Ui::Juego *ui;
};
#endif // JUEGO_H
