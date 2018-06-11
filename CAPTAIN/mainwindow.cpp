#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox->addItem("male");
    ui->comboBox->addItem("female");
    ui->spinBox->setRange(15,70);
    ui->spinBox_3->setRange(35,300);
    ui->spinBox_2->setRange(120,200);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_spinBox_valueChanged(int arg1)
{
    age=ui->spinBox->value();
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    height=ui->spinBox_2->value();
}

void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    weight=ui->spinBox_3->value();
}

void MainWindow::on_comboBox_activated(int index)
{
    indexx= ui->comboBox->currentIndex();
}


void MainWindow::on_pushButton_clicked()
{Dialog open;
    open.setModal(true);
    open.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
if(indexx==0)
{
    calories=(66+(13.7*weight)+(5*height)-(6.8*age))*e;
}
else
{
     calories=(65+(9.6*weight)+(1.8*height)-(4.7*age))*e;
}
    ui->lcdNumber->display(calories);

}

void MainWindow::on_radioButton_clicked()
{
    e=1.2;
}

void MainWindow::on_radioButton_2_clicked()
{
    e=1.26;
}

void MainWindow::on_radioButton_3_clicked()
{
    e=1.46;
}

void MainWindow::on_radioButton_4_clicked()
{
    e=1.61;
}
