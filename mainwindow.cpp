#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "monitor.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    createActions();
    createMenus();
    inter_monitor = new Monitor(this->ui->panel_principal);
    inter_lanzador = NULL;
    inter_acercade = NULL;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createActions(){
    lanzar = new QAction(tr("do it"),this);
    connect(lanzar,SIGNAL(triggered()),this,SLOT(f_lanzar()));

    monitorear = new QAction(tr("do it"),this);
    connect(monitorear,SIGNAL(triggered()),this,SLOT(f_monitorear()));

    acercadear = new QAction(tr("do it"),this);
    connect(acercadear,SIGNAL(triggered()),this,SLOT(f_acercade()));
}

void MainWindow::createMenus(){
    ui->menuLanzador_de_Aplicaciones->addAction(lanzar);
    ui->menuMonitoreo->addAction(monitorear);
    ui->menuAcerca_De->addAction(acercadear);
}

void MainWindow::f_lanzar(){
    inter_lanzador = new lanzador(this);
}

void MainWindow::f_monitor(){
    inter_monitor = new Monitor(this);
}

void MainWindow::f_acercade(){
    inter_acercade = new acercade(this);
}
