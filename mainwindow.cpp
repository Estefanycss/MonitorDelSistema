#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "monitor.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    inter_monitor = new Monitor(this);
   // inter_lanzador = NULL;
  //  inter_acercade = new acercade(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
