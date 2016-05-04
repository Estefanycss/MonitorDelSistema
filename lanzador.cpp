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
                            background-color: rgb(235,235,235); \
                            color: rgb(51,51,51) ; \
                        }\
                        ");
}

lanzador::~lanzador()
{
    delete ui;
}
