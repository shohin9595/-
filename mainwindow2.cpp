#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "mainwindow.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose,true);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButton_4_clicked()
{

    MainWindow *form = new MainWindow();
    form->show();
}
