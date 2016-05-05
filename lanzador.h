#ifndef LANZADOR_H
#define LANZADOR_H

#include <QWidget>
#include <QProcess>
#include <QtCore>
#include <QMessageBox>

#include "monitor.h"

namespace Ui {
class lanzador;
}

class lanzador : public QWidget
{
    Q_OBJECT

public:
    explicit lanzador(QWidget *parent = 0);
    ~lanzador();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::lanzador *ui;
    Monitor m;
};

#endif // LANZADOR_H
