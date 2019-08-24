#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _fileMenu = new QMenu(this);
    _fileMenu->setTitle("File");

   _openFile = new QAction(this), _openFile->setText("Open File"), _openFile->setShortcut(QKeySequence::Open);
   _saveFile = new QAction(this), _saveFile->setText("Save File"), _saveFile->setShortcut(QKeySequence::Save);
   _saveAs = new QAction(this), _saveAs->setText("Save As"), _saveAs->setShortcut(QKeySequence::SaveAs);
   _closeFile = new QAction(this), _closeFile->setText("Close File"), _closeFile->setShortcut(QKeySequence::Close);
   _close = new QAction(this), _close->setText("Exit"), _close->setShortcut(QKeySequence::Quit);

   _fileMenu->addAction(_openFile);
   _fileMenu->addAction(_saveFile);
   _fileMenu->addAction(_saveAs);
   _fileMenu->addAction(_closeFile);
   _fileMenu->addAction(_close);

   _editMenu = new QMenu(this);
   _editMenu->setTitle("Edit");

   _graphGeneration = new QMenu(this);
   _graphGeneration->setTitle("Generate Graph");

   _generateBarChart = new QAction(this);
   _generateBarChart->setText("Generate Bar Chart");

   _graphGeneration->addAction(_generateBarChart);


   _menuBar = new QMenuBar(this);
   _menuBar->addMenu(_fileMenu);
   _menuBar->addMenu(_editMenu);
   _menuBar->addMenu(_graphGeneration);

   setMenuBar(_menuBar);

   connect(_openFile, SIGNAL(triggered()), this, SLOT(onOpenFile()));
   connect(_saveFile, SIGNAL(triggered()), this, SLOT(onSaveFile()));
   connect(_saveAs, SIGNAL(triggered()), this, SLOT(onSaveAs()));
   connect(_closeFile, SIGNAL(triggered()), this, SLOT(onCloseFile()));
   connect(_close, SIGNAL(triggered()), this, SLOT(onClose()));
   connect(_generateBarChart, SIGNAL(triggered()), this, SLOT(onGenerateBarChart()));

   enableCloseFile(false);
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
        _data = new DataView(filePath, this);
        connect(_data, SIGNAL(fileOpen(bool)), this, SLOT(enableCloseFile(bool)));
        setCentralWidget(_data);
        _data->show();
    }
}

#pragma region CRUD

void MainWindow::onSaveFile()
{
    _data->saveToFile();
}

void MainWindow::onSaveAs()
{

}

void MainWindow::onCloseFile()
{
    delete _data;
    enableCloseFile(false);
}

void MainWindow::enableCloseFile(bool enabled)
{
    _closeFile->setEnabled(enabled);
}

void MainWindow::onClose()
{
    close();
}

#pragma endregion

#pragma region graph generation

void MainWindow::onGenerateBarChart()
{
    QStringList tableOfContents = _data->getParser()->getContents();
    BarChartDialog* dlg = new BarChartDialog(tableOfContents, this);
    int val = dlg->exec();
    if (val == QDialog::Accepted) //Ok pressed
    {
        //TODO: Generate D3 JS bar chart
    }
    else                          //Cancel pressed
    {

    }
}

#pragma endregion
