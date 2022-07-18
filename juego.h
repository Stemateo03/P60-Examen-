#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include <QDebug>
#include "configuracion.h"
#include "circulo.h"
#include <QPoint>
#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>
#include <QImage>
#include <QMainWindow>
#include <iomanip>
#include <QPaintEvent>


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

    void on_actionConfigraci0n_triggered();

    void on_actionSalir_triggered();
protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::Juego *ui;
    Circulo *m_circulo;
    void dibujar();
   QImage *mImagen;
   QPainter *mPainter;

};
#endif // JUEGO_H
