/********************************************************************************
** Form generated from reading UI file 'openfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENFILEDIALOG_H
#define UI_OPENFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenFileDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QLabel *fileLabel;
    QLineEdit *fileLineEdit;
    QPushButton *browseFileButton;

    void setupUi(QDialog *OpenFileDialog)
    {
        if (OpenFileDialog->objectName().isEmpty())
            OpenFileDialog->setObjectName(QString::fromUtf8("OpenFileDialog"));
        OpenFileDialog->resize(400, 117);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OpenFileDialog->sizePolicy().hasHeightForWidth());
        OpenFileDialog->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(OpenFileDialog);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 381, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(gridLayoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fileLabel = new QLabel(gridLayoutWidget);
        fileLabel->setObjectName(QString::fromUtf8("fileLabel"));

        horizontalLayout->addWidget(fileLabel);

        fileLineEdit = new QLineEdit(gridLayoutWidget);
        fileLineEdit->setObjectName(QString::fromUtf8("fileLineEdit"));

        horizontalLayout->addWidget(fileLineEdit);

        browseFileButton = new QPushButton(gridLayoutWidget);
        browseFileButton->setObjectName(QString::fromUtf8("browseFileButton"));

        horizontalLayout->addWidget(browseFileButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(OpenFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OpenFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OpenFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OpenFileDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenFileDialog)
    {
        OpenFileDialog->setWindowTitle(QApplication::translate("OpenFileDialog", "Open a new file", nullptr));
        fileLabel->setText(QApplication::translate("OpenFileDialog", "File:", nullptr));
        browseFileButton->setText(QApplication::translate("OpenFileDialog", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenFileDialog: public Ui_OpenFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENFILEDIALOG_H
