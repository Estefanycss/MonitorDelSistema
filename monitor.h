#ifndef MONITOR_H
#define MONITOR_H

#include <QWidget>
#include <QTimer>
#include <QtCore>
#include <string>
#include <stdio.h>
#include <cstdio>
#include <memory>
#include <stdexcept>

namespace Ui {
class Monitor;
}
using namespace std;
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
    string exec(const char* cmd);

private slots:

    void countTime();
};

#endif // MONITOR_H
