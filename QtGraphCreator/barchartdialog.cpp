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

    this->show();
}

BarChartDialog::~BarChartDialog()
{
    delete ui;
}
