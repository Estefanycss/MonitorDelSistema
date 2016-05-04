#ifndef MONITOR_H
#define MONITOR_H

#include <QWidget>
#include <QTimer>

namespace Ui {
class Monitor;
}

class Monitor : public QWidget
{
    Q_OBJECT

public:
    explicit Monitor(QWidget *parent = 0);
    ~Monitor();

private:
    Ui::Monitor     *ui;
    QTimer          *timer;
    int             conteo;

private slots:
    void countTime();
};

#endif // MONITOR_H
