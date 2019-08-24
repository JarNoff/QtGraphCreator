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

    QString getDataViewData();
    void saveToFile();
    CSVParser& getParser();
private:
    void populateTable();

    CSVParser* _parser;
    QList<QList<QString>> _data;
    QString* _filePath;
signals:
    void fileOpen(bool);
};

#endif // DATAVIEW_H
