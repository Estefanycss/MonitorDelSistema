#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include "monitor.h"
#include "lanzador.h"
#include "acercade.h"

class QActions;

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
    QAction     *lanzar;
    QAction     *monitorear;
    QAction     *acercadear;
    void createMenus();
    void createActions();

private slots:
    void f_lanzar();
    void f_monitor();
    void f_acercade();
};

#endif // MAINWINDOW_H
