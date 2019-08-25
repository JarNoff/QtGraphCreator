#include "bargraphgenerator.h"

using GraphCreator::constants::D3Constants;

BarGraphGenerator::BarGraphGenerator(BarChartInformation* graph)
{
    _xValue = graph->xVal;
    _yValue = graph->yVal;

    if (graph->xScale == D3Constants::scaling::ScaleLinear)
    {
        _scalingX = D3Constants::scaleLinear;
    }
    else if (graph->xScale == D3Constants::scaling::ScaleOrdinal)
    {
        _scalingX = D3Constants::ScaleOrdinal;
    }
    else if (graph->xScale == D3Constants::scaling::ScaleLog)
    {
        _scalingX = D3Constants::ScaleLog;
    }
    else if (graph->xScale == D3Constants::scaling::ScaleOrdinal)
    {
        _scalingX = D3Constants::ScaleSequential;
    }

    if (graph->yScale == D3Constants::scaling::ScaleLinear)
    {
        _scalingY = D3Constants::scaleLinear;
    }
    else if (graph->yScale == D3Constants::scaling::ScaleOrdinal)
    {
        _scalingY = D3Constants::ScaleOrdinal;
    }
    else if (graph->yScale == D3Constants::scaling::ScaleLog)
    {
        _scalingY = D3Constants::ScaleLog;
    }
    else if (graph->yScale == D3Constants::scaling::ScaleOrdinal)
    {
        _scalingY = D3Constants::ScaleSequential;
    }

    _title = graph->title;
    _height = QString::number(graph->canvasH);
    _width = QString::number(graph->canvasW);
    _saveDirectory = graph->saveDirectory;

    //generate parent directory that will have data, css, js, etc.

    QString directoryPath = _saveDirectory + "/" + _title;

    QDir dir;
    if (!dir.exists(directoryPath))
    {
        dir.mkpath(directoryPath);
    }

    QString fullPath = directoryPath + "/index.html";
    QString jsPath = directoryPath + "/" + _title + ".js";
    QString shortPath = _title + ".js";

    QFile file(fullPath);

    //Only writes HTML Code to index.HTML file

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

        std::string body = boost::str(boost::format(D3Constants::GenericHtmlBody) % shortPath.toStdString());
        stream << QString::fromStdString(body);
    }
    file.close();

    QFile JsFile(jsPath);

    if (!JsFile.open(QIODevice::NewOnly))
    {
        //File already exists or cannot be found
    }
    else
    {
        QTextStream stream(&JsFile);
        std::string margins = boost::str(boost::format(D3Constants::canvasMargin) % "50" % "50" % "50" % "50");
        stream << QString::fromStdString(margins);

        std::string canvasHeight = boost::str(boost::format(D3Constants::canvasHeight) % _height.toStdString());
        stream << QString::fromStdString(canvasHeight);

        std::string canvasWidth = boost::str(boost::format(D3Constants::canvasWidth) % _width.toStdString());
        stream << QString::fromStdString(canvasWidth);

        stream << QString::fromStdString(D3Constants::svgCreation);

        std::string scalingX = boost::str(boost::format(D3Constants::xScaling) % _scalingX.toStdString());
        stream << QString::fromStdString(scalingX);

        std::string scalingY = boost::str(boost::format(D3Constants::yScaling) % _scalingY.toStdString());
        stream << QString::fromStdString(scalingY);

        std::string dataLoop = boost::str(boost::format(D3Constants::genericCSVDataLoop) % _saveDirectory.toStdString() % _yValue.toStdString() % _yValue.toStdString());
        stream << QString::fromStdString(dataLoop);

        std::string xMapping = boost::str(boost::format(D3Constants::mapX) % _xValue.toStdString());
        stream << QString::fromStdString(xMapping);

        std::string yMapping = boost::str(boost::format(D3Constants::mapY) % _yValue.toStdString());
        stream << QString::fromStdString(yMapping);

        stream << QString::fromStdString(D3Constants::buildRects);

        std::string rectAttributes = boost::str(boost::format(D3Constants::setRectAttributes) % _xValue.toStdString() % _yValue.toStdString() % _height.toStdString() % "Red");
        stream << QString::fromStdString(rectAttributes);

        stream << QString::fromStdString(D3Constants::closingBracket);
    }
    JsFile.close();
}
