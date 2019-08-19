#ifndef CSVPARSER_H
#define CSVPARSER_H

#include <QFile>
#include <QIODevice>
#include <QDebug>

class CSVParser
{
public:
    CSVParser();
    QStringList getContents();
    QList<QList<QString>> getData();
    int getRowCount() const;
    int getColCount() const;
private:
    //QStringList _data;
    QList<QList<QString>> _data;
    QStringList _contents; //Keeps contents of header row in order, so we know which row is which
    int _rowCount;
    int _colCount;
};

#endif // CSVPARSER_H
