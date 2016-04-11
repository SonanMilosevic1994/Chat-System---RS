#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTextEdit>
#include <QMessageBox>




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


//Kada kliknemo na dugme Clear
void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
}

//Kada kliknemo na dugme SPAJALICA
void MainWindow::on_pushButton_3_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this,tr("Open file"),"C://");
}
