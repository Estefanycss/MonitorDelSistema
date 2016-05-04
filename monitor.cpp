#include "monitor.h"
#include "ui_monitor.h"

Monitor::Monitor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Monitor)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    conteo=0;
    connect(timer, SIGNAL(timeout()), this, SLOT(countTime()));
}

Monitor::~Monitor()
{
    delete ui;
}

void Monitor::countTime(){
    if(conteo >= 5){
        setVisible(false);
        conteo=0;
    }
    else
        conteo++;
}
