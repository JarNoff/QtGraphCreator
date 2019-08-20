#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //temporary fix
    _data = new DataView("/home/jaret2/QtGraphCreator/data/2015.csv", this);
    setCentralWidget(_data);
    _data->show();

    _fileMenu = new QMenu(this);
    _fileMenu->setTitle("File");

   _openFile = new QAction(this);
   _openFile->setText("Open File");

   _fileMenu->addAction(_openFile);
   _menuBar = new QMenuBar(this);
   _menuBar->addMenu(_fileMenu);
   setMenuBar(_menuBar);

    connect(_openFile, SIGNAL(triggered()), this, SLOT(onOpenFile()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete _menuBar;
    delete _openFile;
    delete _data;
}

void MainWindow::onOpenFile()
{
    OpenFileDialog* dlg = new OpenFileDialog(this);
    int exec = dlg->exec();
    if (exec == QDialog::Accepted)
    {
        QString filePath = dlg->getPathText();
        //Open the new file and parse data
        delete _data;
        _data = new DataView(filePath, this);
        setCentralWidget(_data);
        _data->show();
    }
}
