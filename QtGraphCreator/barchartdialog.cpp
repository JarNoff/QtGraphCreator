#include "barchartdialog.h"
#include "ui_barchartdialog.h"

BarChartDialog::BarChartDialog(QStringList tableOfContents, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BarChartDialog)
{
    ui->setupUi(this);
    _tableOfContents = tableOfContents;

    //Populate x and y combo boxes
    ui->xValCombo->addItems(tableOfContents);
    ui->yValCombo->addItems(tableOfContents);

    connect(ui->buttonBox, SIGNAL(clicked(QAbstractButton*)), this, SLOT(onButtonBoxPressed(QAbstractButton*)));
    connect(ui->browseButton, SIGNAL(clicked(bool)), this, SLOT(onBrowseButtonPressed(bool)));

    this->show();
}

BarChartDialog::~BarChartDialog()
{
    delete ui;
}

void BarChartDialog::onButtonBoxPressed(QAbstractButton* button)
{
    if ((QPushButton *)button == ui->buttonBox->button(QDialogButtonBox::Ok))
    {
        BarGraphGenerator* bar = new BarGraphGenerator();
    }
}

void BarChartDialog::onBrowseButtonPressed(bool checked)
{
    _dlg = new QFileDialog(this, "Choose a folder to save to...", QString(), "CSV (*.csv)");
    _dlg->setViewMode(QFileDialog::Detail);
    _dlg->setFileMode(QFileDialog::DirectoryOnly);
    QStringList fileName;
    if (_dlg->exec())
    {
        fileName = _dlg->selectedFiles();
        _filePath = fileName.first();
        ui->filePathLineEdit->setText(_filePath);
    }
}
