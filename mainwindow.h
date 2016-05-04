#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "monitor.h"
#include "lanzador.h"
#include "acercade.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Monitor     *inter_monitor;
    lanzador    *inter_lanzador;
    acercade    *inter_acercade;
};

#endif // MAINWINDOW_H
