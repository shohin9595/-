#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow1.h"
#include "mainwindow2.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    MainWindow1 *form = new MainWindow1();
    form->show();
}

void MainWindow::on_pushButton_1_clicked()
{
    MainWindow2 *form = new MainWindow2();
    form->show();
}
