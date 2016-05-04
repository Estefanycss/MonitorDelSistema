#include "acercade.h"
#include "ui_acercade.h"

acercade::acercade(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::acercade)
{
    ui->setupUi(this);
}

acercade::~acercade()
{
    delete ui;
}
