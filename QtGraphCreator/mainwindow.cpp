#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _data = new DataView(this);
    setCentralWidget(_data);
    _data->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
