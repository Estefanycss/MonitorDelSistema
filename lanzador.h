#ifndef LANZADOR_H
#define LANZADOR_H

#include <QWidget>

namespace Ui {
class lanzador;
}

class lanzador : public QWidget
{
    Q_OBJECT

public:
    explicit lanzador(QWidget *parent = 0);
    ~lanzador();

private:
    Ui::lanzador *ui;
};

#endif // LANZADOR_H
