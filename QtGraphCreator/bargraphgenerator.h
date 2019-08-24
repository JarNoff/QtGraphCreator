#ifndef BARGRAPHGENERATOR_H
#define BARGRAPHGENERATOR_H

#include <boost/format.hpp>
#include <barchartinformation.h>
#include <QFile>
#include "d3constants.h"
#include <QTextStream>

class BarGraphGenerator
{
public:
    BarGraphGenerator(BarChartInformation* graph);
private:
    QString _xValue;
    QString _yValue;
    QString _title;
    int _scalingX;
    int _scalingY;
    qreal _height;
    qreal _width;
    QString _saveDirectory;
};

#endif // BARGRAPHGENERATOR_H
