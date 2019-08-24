#ifndef BARCHARTDIALOG_H
#define BARCHARTDIALOG_H

#include <QDialog>
#include <QAbstractButton>
#include <QFileDialog>

#include "bargraphgenerator.h"

namespace Ui {
class BarChartDialog;
}

class BarChartDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BarChartDialog(QStringList tableOfContents, QWidget *parent = nullptr);
    ~BarChartDialog();
public slots:
    void onButtonBoxPressed(QAbstractButton* button);
    void onBrowseButtonPressed(bool checked);

private:
    Ui::BarChartDialog *ui;
    QStringList _tableOfContents;
    QFileDialog* _dlg = nullptr;
    QString _filePath;
};

#endif // BARCHARTDIALOG_H
