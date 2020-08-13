#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <time.h>
#include <iostream>
#include<QString>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int temporal=0;
    QString capturando = ui->textEdit->toPlainText();
    temporal=capturando.toInt();
    if (temporal>numero_azar){
        ui->label->setText("EL NUMERO ES MENOR");
        ui->label->setStyleSheet("font-size:20pt; font-weight:600; color:red;");
    }
    else if(temporal<numero_azar){
        ui->label->setText("EL NUMERO ES MAYOR");
        ui->label->setStyleSheet("font-size:20pt; font-weight:600; color:#4e9a06;");
    }
    else{
        ui->label->setText("HAS GANADO");
        ui->label->setStyleSheet("font-size:20pt; font-weight:600; color:#4e9a06;");
        ganador=1;
    }
    ui->textEdit->setText("");
    intentos++;
    ui->contador->setText(QString::number(intentos));
    if(intentos>10 && ganador==0){
        QString dd="PERDISTE #"+QString::number(numero_azar);
        ui->label->setText(dd);
        ui->label->setStyleSheet("font-size:20pt; font-weight:600; color:orange;");
        ui->contador->setText("0");
        ui->label_5->setStyleSheet("color:#ce5c00;");
        ui->label_5->setText("");
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    srand(time(0));
    numero_azar=1+rand() % 1000;
    data=QString::number(numero_azar);
    ui->label->setText("MUCHA SUERTE");
    ui->label->setStyleSheet("font-size:20pt; font-weight:600; color:#4e9a06;");
    ui->contador->setText("0");
    ui->label_5->setStyleSheet("color:#ce5c00;");
    ui->label_5->setText(" <<< ");
    ganador=0;
    intentos=0;
}
