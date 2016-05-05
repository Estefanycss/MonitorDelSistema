#include "monitor.h"
#include "ui_monitor.h"


Monitor::Monitor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Monitor)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    conteo=0;
    connect(timer, SIGNAL(timeout()), this, SLOT(countTime()));
    timer->start(1000);
}

Monitor::~Monitor()
{
    delete ui;
}

void Monitor::countTime(){
    QString kernel = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --kernel-version"));
    QString processes = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --running-processes"));
    QString mem = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --mem-total"));
    QString mem_free = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --mem-total-free"));
    QString mem_swap = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --mem-swap"));
    QString mem_swap_free = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --mem-swap-free"));
    QString disk = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --disk-list"));
    QString partitions = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --partitions-list"));
    QString net = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --net-list"));
    QString net_ip = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --net-list-ip"));
    QString disk_space = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --disk-space"));
    QString user = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --current-user"));
    QString date = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --date-time"));
    QString uptime = QString::fromStdString(exec("../graphic-so-monitor/engine/Project1.exe --uptime"));
    ui->kernel->setText(kernel);
    ui->procesos->setText(processes);
    ui->total_RAM->setText(mem);
    ui->libre_RAM->setText(mem_free);
    ui->total_SWAP->setText(mem_swap);
    ui->libre_SWAP->setText(mem_swap_free);
    ui->discos->setText(disk);
    ui->particiones->setText(partitions);
    ui->interfaces->setText(net_ip);
    ui->espacio_discos->setText(disk_space);
    ui->fecha->setText(date);
    ui->tiempo_transcurrido->setText(uptime);
    ui->usuario->setText(user);
    qDebug() << kernel;
}

string Monitor::exec(const char* cmd) {
    char buffer[128];
    std::string result = "";
    std::shared_ptr<FILE> pipe(popen(cmd, "r"), pclose);
    if (!pipe) throw std::runtime_error("popen() failed!");
    while (!feof(pipe.get())) {
        if (fgets(buffer, 128, pipe.get()) != NULL)
            result += buffer;
    }
    return result;
}
