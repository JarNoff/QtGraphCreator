#include "dataview.h"

DataView::DataView(QString filePath, QWidget* parent) : QTableWidget(parent)
{
    _filePath = &filePath;
    _parser = new CSVParser(filePath);
    setRowCount(_parser->getRowCount());
    setColumnCount(_parser->getColCount());

    populateTable();

    //qDebug() << _data;

}

DataView::~DataView()
{
    delete _parser;
}

void DataView::populateTable()
{
    _data = _parser->getData();
    setHorizontalHeaderLabels(_parser->getContents());

    for (int i = 0; i < _data.size(); i++)
    {
        for (int j = 0; j < _data.at(i).size(); j++)
        {
            QTableWidgetItem* item = new QTableWidgetItem(_data.at(i).at(j));
            setItem(i, j, item);
        }
    }

    emit fileOpen(true);
}

QString DataView::getDataViewData()
{
    QString textData = "";
    for (int i = 0; i < columnCount(); i++)
    {
        for (int j = 0; j < rowCount(); j++)
        {
            textData += model()->data(model()->index(j,i)).toString();
            textData += ",";
        }
        textData += "\n";
    }
    return textData;
}

void DataView::saveToFile()
{
    QString data = getDataViewData();
    if (!data.isEmpty() && _filePath)
    {
        QFile file(*_filePath); //Crash on this part, probably because the _filePath is not accessible?
        if(file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {

            QTextStream out(&file);
            out << data;
            file.close();

            //emit saved();
        }
        else
        {
            //Can't write to the file for saving for some reason
        }
    }
}

CSVParser* DataView::getParser()
{
    return _parser;
}
