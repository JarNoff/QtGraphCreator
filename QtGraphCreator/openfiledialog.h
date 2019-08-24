#ifndef OPENFILEDIALOG_H
#define OPENFILEDIALOG_H

#include <QDialog>
#include <QFileDialog>

namespace Ui {
class OpenFileDialog;
}

class OpenFileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OpenFileDialog(QWidget *parent = nullptr);
    ~OpenFileDialog();

    void setPathText(QString filePath);
    QString getPathText();

private:
    Ui::OpenFileDialog *ui;
    QString _filePath;
    QFileDialog* _dlg;

public slots:
    void onBrowseFile();
    void onOkPressed();
};

#endif // OPENFILEDIALOG_H
