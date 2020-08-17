#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "iostream"

#include "mainopengl.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


   MiWidgetOpenGL *wogl = new MiWidgetOpenGL();
   ui->layaout->addWidget(wogl);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    cout<<"Hola Osti Katriel"<<endl;
}
