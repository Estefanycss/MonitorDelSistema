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
    inter_monitor->setVisible(true);
    inter_lanzador = new lanzador(this->ui->panel_principal);
    inter_lanzador->setVisible(false);
    inter_acercade = new acercade(this->ui->panel_principal);
    inter_acercade->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createActions(){
    lanzar = new QAction(tr("Abrir"),this);
    connect(lanzar,SIGNAL(triggered()),this,SLOT(f_lanzar()));

    monitorear = new QAction(tr("Abrir"),this);
    connect(monitorear,SIGNAL(triggered()),this,SLOT(f_monitor()));

    acercadear = new QAction(tr("Abrir"),this);
    connect(acercadear,SIGNAL(triggered()),this,SLOT(f_acercade()));
}

void MainWindow::createMenus(){
    ui->menuLanzador_de_Aplicaciones->addAction(lanzar);
    ui->menuMonitoreo->addAction(monitorear);
    ui->menuAcerca_De->addAction(acercadear);
}

void MainWindow::f_lanzar(){
    inter_lanzador->setVisible(true);
    inter_monitor->setVisible(false);
    inter_acercade->setVisible(false);
}

void MainWindow::f_monitor(){
    inter_monitor->setVisible(true);
    inter_lanzador->setVisible(false);
    inter_acercade->setVisible(false);
}

void MainWindow::f_acercade(){
    inter_acercade->setVisible(true);
    inter_monitor->setVisible(false);
    inter_lanzador->setVisible(false);
}
