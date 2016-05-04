#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include "monitor.h"
#include "lanzador.h"
#include "acercade.h"

class QAction;

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
    void createMenus();
    void createActions();

    QAction *lanzar;
    QAction *monitorear;
    QAction *acercadear; //yo acercadeo, tu acercadeas, el acercadea, nosotros acercadeamos.
    //QMenu *lanza;
    //QMenu *monitor;
    //QMenu *acerca;

private slots:
    void f_monitor();
    void f_lanzar();
    void f_acercade();
};

#endif // MAINWINDOW_H
