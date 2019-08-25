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

    ui->xAxisScaleCB->addItem("Scale Linear");
    ui->xAxisScaleCB->addItem("Scale Ordinal");
    ui->xAxisScaleCB->addItem("Scale Log");
    ui->xAxisScaleCB->addItem("Scale Sequential");
    ui->xAxisScaleCB->addItem("Scale Band");

    ui->yAxisScaleCB->addItem("Scale Linear");
    ui->yAxisScaleCB->addItem("Scale Ordinal");
    ui->yAxisScaleCB->addItem("Scale Log");
    ui->yAxisScaleCB->addItem("Scale Sequential");
    ui->yAxisScaleCB->addItem("Scale Band");

    ui->canvasHeightLineEdit->setValidator(new QDoubleValidator(0, 1000, 3, this));
    ui->canvasWidthLineEdit->setValidator(new QDoubleValidator(0, 1000, 3, this));

    connect(ui->buttonBox, SIGNAL(clicked(QAbstractButton*)), this, SLOT(onButtonBoxPressed(QAbstractButton*)));
    connect(ui->browseButton, SIGNAL(clicked(bool)), this, SLOT(onBrowseButtonPressed(bool)));
    connect(ui->canvasWidthLineEdit, SIGNAL(editingFinished()), this, SLOT(onCanvasWidthChanged()));
    connect(ui->canvasHeightLineEdit, SIGNAL(editingFinished()), this, SLOT(onCanvasHeightChanged()));
    connect(ui->graphTitlelineEdit, SIGNAL(editingFinished()), this, SLOT(onTitleChanged()));
    connect(ui->xAxisScaleCB, SIGNAL(currentIndexChanged(int)), this, SLOT(onXScaleChanged(int)));
    connect(ui->yAxisScaleCB, SIGNAL(currentIndexChanged(int)), this, SLOT(onYScaleChanged(int)));
    connect(ui->xValCombo, SIGNAL(currentIndexChanged(int)), this, SLOT(onXValueChanged(int)));
    connect(ui->yValCombo, SIGNAL(currentIndexChanged(int)), this, SLOT(onYValueChanged(int)));

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
        //Construct Bar Chart Information Object
        BarChartInformation* info = new BarChartInformation(_xValue, _yValue, _graphTitle, _xScale, _yScale, _canvasHeight, _canvasWidth, _filePath);
        //Construct Generator
        BarGraphGenerator* bar = new BarGraphGenerator(info);
    }
}

void BarChartDialog::onBrowseButtonPressed(bool checked)
{
    _dlg = new QFileDialog(this, "Choose a folder to save to...");
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

void BarChartDialog::onXValueChanged(int val)
{
    _xValue = _tableOfContents.at(val);

}

void BarChartDialog::onYValueChanged(int val)
{
    _yValue = _tableOfContents.at(val);
}

void BarChartDialog::onXScaleChanged(int val)
{
    _xScale = val;
}

void BarChartDialog::onYScaleChanged(int val)
{
    _yScale = val;
}

void BarChartDialog::onTitleChanged()
{
    _graphTitle = ui->graphTitlelineEdit->text();
}

void BarChartDialog::onCanvasWidthChanged()
{
    QString width = ui->canvasWidthLineEdit->text();
    _canvasWidth = width.toDouble();
}

void BarChartDialog::onCanvasHeightChanged()
{
    QString height = ui->canvasHeightLineEdit->text();
    _canvasHeight = height.toDouble();
}
