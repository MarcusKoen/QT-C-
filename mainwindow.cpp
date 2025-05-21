//Base class/
#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)//Constructor
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()//Destructor
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
        
}

