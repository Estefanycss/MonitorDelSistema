#include "acercade.h"
#include "ui_acercade.h"

acercade::acercade(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::acercade)
{
    ui->setupUi(this);
    QPixmap pixmap(":/images/images/logo_unet.jpg");
    ui->imagen_unet->setPixmap(pixmap);
    ui->imagen_unet->setMask(pixmap.mask());
    ui->imagen_unet->show();
}

acercade::~acercade()
{
    delete ui;
}
