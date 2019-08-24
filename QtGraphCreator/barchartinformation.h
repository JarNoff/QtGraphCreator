#ifndef BARCHARTINFORMATION_H
#define BARCHARTINFORMATION_H

#include <QString>

struct BarChartInformation
{
    BarChartInformation(QString x, QString y, QString tit, int xScaling, int yScaling, qreal height, qreal width, QString filePath)
        : xVal(x), yVal(y), title(tit), xScale(xScaling), yScale(yScaling), canvasH(height), canvasW(width), saveDirectory(filePath) {}
    QString xVal;
    QString yVal;
    QString title;
    int xScale;
    int yScale;
    qreal canvasH;
    qreal canvasW;
    QString saveDirectory;
};

#endif // BARCHARTINFORMATION_H
