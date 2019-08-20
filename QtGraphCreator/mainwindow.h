#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dataview.h"
#include "openfiledialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onOpenFile();

private:
    Ui::MainWindow *ui;
    DataView* _data;

    QMenuBar* _menuBar = nullptr;
    QMenu* _fileMenu = nullptr;
    QAction* _openFile = nullptr;
};

#endif // MAINWINDOW_H
