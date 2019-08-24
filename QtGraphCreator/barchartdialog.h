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

    void onXValueChanged(int val);
    void onYValueChanged(int val);
    void onXScaleChanged(int val);
    void onYScaleChanged(int val);
    void onTitleChanged();

    void onCanvasHeightChanged();
    void onCanvasWidthChanged();

private:
    Ui::BarChartDialog *ui;
    QStringList _tableOfContents;
    QFileDialog* _dlg = nullptr;
    QString _filePath;

    QString _xValue;
    QString _yValue;
    QString _graphTitle;
    int _xScale;
    int _yScale;
    qreal _canvasHeight;
    qreal _canvasWidth;

};

#endif // BARCHARTDIALOG_H
