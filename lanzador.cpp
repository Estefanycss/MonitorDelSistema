#include "lanzador.h"
#include "ui_lanzador.h"

lanzador::lanzador(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::lanzador)
{
    ui->setupUi(this);
    this->setStyleSheet("QPushButton{\
                            background: rgb(231, 76, 60);\
                            border-radius: 3px;\
                            font: 15px; \
                            padding: 6px;\
                        }\
                        QPushButton:hover { \
                            background-color: rgb(192, 57, 43); \
                            color: white; \
                        }\
                        QPushButton:!hover { \
                            background-color: rgb(231, 76, 60); \
                            color: white; \
                        }\
                        QPushButton:!enabled { \
                            background-color: rgb(96,125,139); \
                            color: white; \
                        }\
                        QTextEdit{ \
                            background-color: rgb(236,240,241); \
                            color: rgb(51,51,51) ; \
                        }\
                        ");
}

lanzador::~lanzador()
{
    delete ui;
}

void lanzador::on_pushButton_clicked()
{
    QProcess proceso;
    proceso.startDetached("../../engine/Project1.exe --ext " + ui->textEdit->toPlainText());
}

void lanzador::on_pushButton_2_clicked()
{
    QMessageBox msgBox;
    QString str_1 = "../../engine/Project1.exe --pid " + ui->textEdit_2->toPlainText();
    QString str = QString::fromStdString(m.exec(str_1.toLatin1()));
    msgBox.setText(str);
    msgBox.exec();
    qDebug() << str;
}

void lanzador::on_pushButton_3_clicked()
{
    QProcess proceso;
    proceso.startDetached("../../engine/Project1.exe --kill " + ui->textEdit_3->toPlainText());
}
