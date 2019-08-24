#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dataview.h"
#include "openfiledialog.h"
#include "barchartdialog.h"

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
    void onSaveFile();
    void onSaveAs();
    void onCloseFile();
    void enableCloseFile(bool);
    void onClose();
    void onGenerateBarChart();

private:
    Ui::MainWindow *ui;
    DataView* _data;

    QMenuBar* _menuBar = nullptr;
    QMenu* _fileMenu = nullptr;
    QMenu* _editMenu = nullptr;
    QMenu* _graphGeneration = nullptr;

    QAction* _openFile = nullptr;
    QAction* _saveFile = nullptr;
    QAction* _saveAs = nullptr;
    QAction* _closeFile = nullptr;
    QAction* _close = nullptr;
    QAction* _generateBarChart = nullptr;
};

#endif // MAINWINDOW_H
