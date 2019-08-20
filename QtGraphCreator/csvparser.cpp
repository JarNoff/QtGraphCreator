#include "csvparser.h"


CSVParser::CSVParser(QString filePath)
{
    //Try to read in data from file
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug() << file.errorString();
    }

    _data = QList<QList<QString>>();
    _contents = QStringList();

    _rowCount = -1;
   _colCount = 0;
    while(!file.atEnd())
    {
        //If header row
        if (_rowCount == -1)
        {
            QByteArray line = file.readLine();

            //Get column count
            //Uses comma delimter
            QList<QByteArray> splits = line.split(',');

            for (QByteArray array : splits)
            {
                _colCount++;
                _contents.push_back(QString::fromStdString(array.toStdString())); //this is wacky
            }
            _rowCount++;
        }
        else
        {
            QByteArray line = file.readLine();
            QList<QString> row = QList<QString>();

            QList<QByteArray> splits = line.split(',');

            for (QByteArray array : splits)
            {
                row.push_back(QString::fromStdString(array.toStdString())); //this is wacky
            }

            _data.push_back(row);

            _rowCount++;
        }
    }



    qDebug() << _data;
}

CSVParser::~CSVParser()
{
    //delete _data;
    //delete _contents;
}

QList<QList<QString>> CSVParser::getData()
{
    //should probably return a const reference
    return _data;
}

QStringList CSVParser::getContents()
{
    return _contents;
}

int CSVParser::getRowCount() const
{
    return _rowCount;
}

int CSVParser::getColCount() const
{
    return _colCount;
}
