#ifndef DATAVIEW_H
#define DATAVIEW_H

#include <QWidget>
#include <QTableWidget>
#include "csvparser.h"

class DataView : public QTableWidget
{
    Q_OBJECT

public:
    DataView(QString filePath, QWidget* parent = nullptr);
    ~DataView();
private:
    void populateTable();

    CSVParser* _parser;
    QList<QList<QString>> _data;
};

#endif // DATAVIEW_H
