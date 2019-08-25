#ifndef BARGRAPHGENERATOR_H
#define BARGRAPHGENERATOR_H

#include <boost/format.hpp>
#include <barchartinformation.h>
#include <QFile>
#include <QDir>
#include "d3constants.h"
#include <QTextStream>

class BarGraphGenerator
{
public:
    BarGraphGenerator(BarChartInformation* graph);
    virtual inline ~BarGraphGenerator() {}
private:
    void generateHTMLFile();
    void generateJSFile();

    QString _xValue;
    QString _yValue;
    QString _title;
    QString _scalingX;
    QString _scalingY;
    QString _height;
    QString _width;
    QString _saveDirectory;
};

#endif // BARGRAPHGENERATOR_H
