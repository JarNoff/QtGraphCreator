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

QT_BEGIN_NAMESPACE

class Ui_BarChartDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *xValCombo;
    QLabel *label_2;
    QComboBox *yValCombo;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QComboBox *comboBox_4;
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
        groupBox_2 = new QGroupBox(BarChartDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));

        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(BarChartDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));

        formLayout_2->setLayout(0, QFormLayout::LabelRole, formLayout);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        xValCombo = new QComboBox(groupBox);
        xValCombo->setObjectName(QString::fromUtf8("xValCombo"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, xValCombo);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        yValCombo = new QComboBox(groupBox);
        yValCombo->setObjectName(QString::fromUtf8("yValCombo"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, yValCombo);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_3);

        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBox_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, comboBox_4);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(BarChartDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(BarChartDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BarChartDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BarChartDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BarChartDialog);
    } // setupUi

    void retranslateUi(QDialog *BarChartDialog)
    {
        BarChartDialog->setWindowTitle(QApplication::translate("BarChartDialog", "Dialog", nullptr));
        groupBox_2->setTitle(QApplication::translate("BarChartDialog", "GroupBox", nullptr));
        groupBox->setTitle(QApplication::translate("BarChartDialog", "Positioning and Scaling", nullptr));
        label->setText(QApplication::translate("BarChartDialog", "X Value:", nullptr));
        label_2->setText(QApplication::translate("BarChartDialog", "Y Value:", nullptr));
        label_3->setText(QApplication::translate("BarChartDialog", "X Axis Scaling:", nullptr));
        label_4->setText(QApplication::translate("BarChartDialog", "Y Axis Scaling:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BarChartDialog: public Ui_BarChartDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARCHARTDIALOG_H
