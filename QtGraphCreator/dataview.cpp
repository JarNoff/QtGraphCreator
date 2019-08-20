#include "dataview.h"

DataView::DataView(QString filePath, QWidget* parent) : QTableWidget(parent)
{
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
}
