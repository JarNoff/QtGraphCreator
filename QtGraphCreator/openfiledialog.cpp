#include "openfiledialog.h"
#include "ui_openfiledialog.h"

OpenFileDialog::OpenFileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenFileDialog)
{
    ui->setupUi(this);
    connect(ui->browseFileButton, SIGNAL(clicked()), this, SLOT(onBrowseFile()));
    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(onOkPressed()));
}

OpenFileDialog::~OpenFileDialog()
{
    delete ui;
}

void OpenFileDialog::onBrowseFile()
{
    _dlg = new QFileDialog(this, "Choose a file...", QString(), "CSV (*.csv)");
    _dlg->setViewMode(QFileDialog::Detail);
    _dlg->setFileMode(QFileDialog::ExistingFile);
    QStringList fileName;
    if (_dlg->exec())
    {
        fileName = _dlg->selectedFiles();
        _filePath = fileName.first();
        ui->fileLineEdit->setText(_filePath);

        //check if path is valid and attempt to open file
        //emit fileOpened();
    }
}

void OpenFileDialog::onOkPressed()
{
    _filePath = ui->fileLineEdit->text();
}

void OpenFileDialog::setPathText(QString filePath)
{
    _filePath = filePath;
}

QString OpenFileDialog::getPathText()
{
    return _filePath;
}
