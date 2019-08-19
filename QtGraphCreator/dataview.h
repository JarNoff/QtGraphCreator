#ifndef DATAVIEW_H
#define DATAVIEW_H

#include <QWidget>
#include <QTableWidget>

class DataView : public QTableWidget
{
    Q_OBJECT

public:
    DataView(QWidget* parent = nullptr);
private:

};

#endif // DATAVIEW_H
