#include "juego.h"
#include "ui_juego.h"
#include "circulo.h"
Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());
    mImagen = new QImage(this->size(),QImage::Format_ARGB32_Premultiplied);
        mImagen->fill(Qt::white);
        mPainter = new QPainter(mImagen);
        mPainter->setRenderHint(QPainter::Antialiasing);
    QPainter painter();

        int x = 0;
        int y = 0;

        QPen pincel;
        pincel.setWidth(5);
        pincel.setColor(Qt::black);
        pincel.setJoinStyle(Qt::MiterJoin);


        painter.setPen(pincel);

       painter.setBrush(Qt::yellow);


        painter.drawRect(x+100, y+50,100, 100);

        dibujar();

}

Juego::~Juego()
{
    delete mPainter;
    delete mImagen;
    delete ui;
}


void Juego::on_btnArriba_released()
{

}


void Juego::on_btnAbajo_released()
{

}


void Juego::on_btnIzqueirda_released()
{

}


void Juego::on_btnDerecha_released()
{

}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

void Juego::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.drawImage(0, 0, *mImagen);

    event->accept();
}

void Juego::dibujar()
{
    QPen pincel;
      pincel.setWidth(5);
      pincel.setColor(Qt::black);
      pincel.setJoinStyle(Qt::MiterJoin);

      mPainter->drawRect(200, 180,100, 100);

      pincel.setColor(Qt::black);
      pincel.setWidth(3);
      // Dibujar una linea
      mPainter->setPen(pincel);
     // mPainter->drawEllipse(m_circulo->getPosx(), m_circulo->getPosy(), m_circulo->getSize(), m_circulo->getSize());
      update();
}

