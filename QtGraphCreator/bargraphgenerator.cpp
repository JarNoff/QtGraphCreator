#include "bargraphgenerator.h"

using GraphCreator::constants::D3Constants;

BarGraphGenerator::BarGraphGenerator(BarChartInformation* graph)
{
    _xValue = graph->xVal;
    _yValue = graph->yVal;
    _scalingX = graph->xScale;
    _scalingY = graph->yScale;
    _title = graph->title;
    _height = graph->canvasH;
    _width = graph->canvasW;
    _saveDirectory = graph->saveDirectory;

    QString fullPath = _saveDirectory + "/" + _title + ".js";

    QFile file(fullPath);

    if (!file.open(QIODevice::NewOnly))
    {
        //File already exists or cannot be found
    }
    else //New file created and opened
    {
        QTextStream stream(&file);
        //These string conversions are going to make me have a stroke
        std::string headerHTML = boost::str(boost::format(D3Constants::HtmlHeader) % _title.toStdString());
        stream << QString::fromStdString(headerHTML);

        //std::string bodyHTML = boost::str(boost::format(D3Constants::GenericHtmlBody) % "");
        stream << QString::fromStdString(D3Constants::GenericHtmlBody);

        std::string canvasHeight = boost::str(boost::format(D3Constants::canvasHeight) % _height);
        stream << QString::fromStdString(canvasHeight);

    }
    file.close();
}
