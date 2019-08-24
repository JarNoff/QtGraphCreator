/********************************************************************************
** Form generated from reading UI file 'barchartdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARCHARTDIALOG_H
#define UI_BARCHARTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_BarChartDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGroupBox *posAndScaling;
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLabel *xValLabel;
    QComboBox *xValCombo;
    QLabel *yValLabel;
    QComboBox *yValCombo;
    QLabel *xAxisLabel;
    QComboBox *xAxisScaleCB;
    QLabel *yAxisLabel;
    QComboBox *yAxisScaleCB;
    QLabel *canvasHeightLabel;
    QLineEdit *canvasHeightLineEdit;
    QLabel *canvasWidthLabel;
    QLineEdit *canvasWidthLineEdit;
    QGroupBox *properties;
    QFormLayout *formLayout_3;
    QLabel *graphTitleLabel;
    QLineEdit *graphTitlelineEdit;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *filePathLineEdit;
    QLabel *filePathLabel;
    QPushButton *browseButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BarChartDialog)
    {
        if (BarChartDialog->objectName().isEmpty())
            BarChartDialog->setObjectName(QString::fromUtf8("BarChartDialog"));
        BarChartDialog->resize(400, 684);
        gridLayout_2 = new QGridLayout(BarChartDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        posAndScaling = new QGroupBox(BarChartDialog);
        posAndScaling->setObjectName(QString::fromUtf8("posAndScaling"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(posAndScaling->sizePolicy().hasHeightForWidth());
        posAndScaling->setSizePolicy(sizePolicy);
        posAndScaling->setMaximumSize(QSize(380, 380));
        formLayout_2 = new QFormLayout(posAndScaling);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));

        formLayout_2->setLayout(0, QFormLayout::LabelRole, formLayout);

        xValLabel = new QLabel(posAndScaling);
        xValLabel->setObjectName(QString::fromUtf8("xValLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, xValLabel);

        xValCombo = new QComboBox(posAndScaling);
        xValCombo->setObjectName(QString::fromUtf8("xValCombo"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, xValCombo);

        yValLabel = new QLabel(posAndScaling);
        yValLabel->setObjectName(QString::fromUtf8("yValLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, yValLabel);

        yValCombo = new QComboBox(posAndScaling);
        yValCombo->setObjectName(QString::fromUtf8("yValCombo"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, yValCombo);

        xAxisLabel = new QLabel(posAndScaling);
        xAxisLabel->setObjectName(QString::fromUtf8("xAxisLabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, xAxisLabel);

        xAxisScaleCB = new QComboBox(posAndScaling);
        xAxisScaleCB->setObjectName(QString::fromUtf8("xAxisScaleCB"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, xAxisScaleCB);

        yAxisLabel = new QLabel(posAndScaling);
        yAxisLabel->setObjectName(QString::fromUtf8("yAxisLabel"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, yAxisLabel);

        yAxisScaleCB = new QComboBox(posAndScaling);
        yAxisScaleCB->setObjectName(QString::fromUtf8("yAxisScaleCB"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, yAxisScaleCB);

        canvasHeightLabel = new QLabel(posAndScaling);
        canvasHeightLabel->setObjectName(QString::fromUtf8("canvasHeightLabel"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, canvasHeightLabel);

        canvasHeightLineEdit = new QLineEdit(posAndScaling);
        canvasHeightLineEdit->setObjectName(QString::fromUtf8("canvasHeightLineEdit"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, canvasHeightLineEdit);

        canvasWidthLabel = new QLabel(posAndScaling);
        canvasWidthLabel->setObjectName(QString::fromUtf8("canvasWidthLabel"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, canvasWidthLabel);

        canvasWidthLineEdit = new QLineEdit(posAndScaling);
        canvasWidthLineEdit->setObjectName(QString::fromUtf8("canvasWidthLineEdit"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, canvasWidthLineEdit);


        gridLayout->addWidget(posAndScaling, 1, 0, 1, 1);

        properties = new QGroupBox(BarChartDialog);
        properties->setObjectName(QString::fromUtf8("properties"));
        formLayout_3 = new QFormLayout(properties);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        graphTitleLabel = new QLabel(properties);
        graphTitleLabel->setObjectName(QString::fromUtf8("graphTitleLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, graphTitleLabel);

        graphTitlelineEdit = new QLineEdit(properties);
        graphTitlelineEdit->setObjectName(QString::fromUtf8("graphTitlelineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, graphTitlelineEdit);

        label = new QLabel(properties);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(properties);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit);


        gridLayout->addWidget(properties, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        filePathLineEdit = new QLineEdit(BarChartDialog);
        filePathLineEdit->setObjectName(QString::fromUtf8("filePathLineEdit"));

        gridLayout_2->addWidget(filePathLineEdit, 4, 0, 1, 1);

        filePathLabel = new QLabel(BarChartDialog);
        filePathLabel->setObjectName(QString::fromUtf8("filePathLabel"));

        gridLayout_2->addWidget(filePathLabel, 3, 0, 1, 1);

        browseButton = new QPushButton(BarChartDialog);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        gridLayout_2->addWidget(browseButton, 4, 1, 1, 1);

        buttonBox = new QDialogButtonBox(BarChartDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 5, 0, 1, 1, Qt::AlignLeft);


        retranslateUi(BarChartDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BarChartDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BarChartDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BarChartDialog);
    } // setupUi

    void retranslateUi(QDialog *BarChartDialog)
    {
        BarChartDialog->setWindowTitle(QApplication::translate("BarChartDialog", "Dialog", nullptr));
        posAndScaling->setTitle(QApplication::translate("BarChartDialog", "Positioning and Scaling", nullptr));
        xValLabel->setText(QApplication::translate("BarChartDialog", "X Value:", nullptr));
        yValLabel->setText(QApplication::translate("BarChartDialog", "Y Value:", nullptr));
        xAxisLabel->setText(QApplication::translate("BarChartDialog", "X Axis Scaling:", nullptr));
        yAxisLabel->setText(QApplication::translate("BarChartDialog", "Y Axis Scaling:", nullptr));
        canvasHeightLabel->setText(QApplication::translate("BarChartDialog", "Canvas Height:", nullptr));
        canvasHeightLineEdit->setText(QApplication::translate("BarChartDialog", "500", nullptr));
        canvasWidthLabel->setText(QApplication::translate("BarChartDialog", "Canvas Width:", nullptr));
        canvasWidthLineEdit->setText(QApplication::translate("BarChartDialog", "500", nullptr));
        properties->setTitle(QApplication::translate("BarChartDialog", "Properties", nullptr));
        graphTitleLabel->setText(QApplication::translate("BarChartDialog", "Title:", nullptr));
        label->setText(QApplication::translate("BarChartDialog", "Bar Color:", nullptr));
        filePathLabel->setText(QApplication::translate("BarChartDialog", "File Path:", nullptr));
        browseButton->setText(QApplication::translate("BarChartDialog", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BarChartDialog: public Ui_BarChartDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARCHARTDIALOG_H
