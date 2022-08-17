#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
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


void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    ui->label->setNum(ui->horizontalSlider->value());
    ui->price_label_0->setNum(ui->horizontalSlider->value());
    ui->price_label_1->setNum(ui->horizontalSlider->value());
    double opacity=(double)1-(double)ui->horizontalSlider->value()/114551;
    cout<<"Debug: setWindowOacity("<<opacity<<")"<<endl;
    cout<<"Debug: horizontalSlider moved to "<<ui->horizontalSlider->value()<<endl;
    this->setWindowOpacity(opacity);

}


void MainWindow::on_pushButton_clicked()
{
    ui->cpu_price_label->setText("CPU价格");
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->gpu_price_label->setText("显卡价格");
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->mem_price_label->setText("内存条价格");
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->hdd_price_label->setText("硬盘价格");
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->zb_price_label->setText("主板价格");
}

