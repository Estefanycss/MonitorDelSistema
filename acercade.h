#ifndef ACERCADE_H
#define ACERCADE_H

#include <QWidget>

namespace Ui {
class acercade;
}

class acercade : public QWidget
{
    Q_OBJECT

public:
    explicit acercade(QWidget *parent = 0);
    ~acercade();

private:
    Ui::acercade *ui;
};

#endif // ACERCADE_H
