#include "lanzador.h"
#include "ui_lanzador.h"

lanzador::lanzador(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lanzador)
{
    ui->setupUi(this);
}

lanzador::~lanzador()
{
    delete ui;
}
