#ifndef BARCHARTDIALOG_H
#define BARCHARTDIALOG_H

#include <QDialog>

namespace Ui {
class BarChartDialog;
}

class BarChartDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BarChartDialog(QStringList tableOfContents, QWidget *parent = nullptr);
    ~BarChartDialog();

private:
    Ui::BarChartDialog *ui;
    QStringList _tableOfContents;
};

#endif // BARCHARTDIALOG_H
