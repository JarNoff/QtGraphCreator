#include "dataview.h"
#include "csvparser.h"

DataView::DataView(QWidget* parent) : QTableWidget(parent)
{
    CSVParser* parser = new CSVParser();
    setRowCount(parser->getRowCount());
    setColumnCount(parser->getColCount());

    QList<QList<QString>> data = parser->getData();

    int rowCount = parser->getRowCount();
    int colCount = parser->getColCount();

    for (int i = 0; i < data.size(); i++)
    {
        for (int j = 0; j < data.at(i).size(); j++)
        {
            QTableWidgetItem* item = new QTableWidgetItem(data.at(i).at(j));
            setItem(i, j, item);
        }
    }

    qDebug() << data;

}
