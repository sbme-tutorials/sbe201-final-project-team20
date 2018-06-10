/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QCheckBox>
QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QColumnView *columnView;
    QColumnView *columnView_2;
    QColumnView *columnView_3;
    QColumnView *columnView_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
     QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_16;


    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(708, 532);
        Dialog->setStyleSheet(QStringLiteral("	QDialog{background:rgb(99, 48, 48)}"));
        columnView = new QColumnView(Dialog);
        columnView->setObjectName(QStringLiteral("columnView"));
        columnView->setGeometry(QRect(10, 10, 311, 261));
        columnView_2 = new QColumnView(Dialog);
        columnView_2->setObjectName(QStringLiteral("columnView_2"));
        columnView_2->setGeometry(QRect(390, 10, 311, 261));
        columnView_3 = new QColumnView(Dialog);
        columnView_3->setObjectName(QStringLiteral("columnView_3"));
        columnView_3->setGeometry(QRect(10, 300, 311, 231));
        columnView_4 = new QColumnView(Dialog);
        columnView_4->setObjectName(QStringLiteral("columnView_4"));
        columnView_4->setGeometry(QRect(390, 300, 311, 231));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 90, 67, 17));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(460, 110, 67, 17));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 380, 67, 17));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 400, 67, 17));
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        verticalLayout->addWidget(checkBox);
        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        verticalLayout->addWidget(checkBox_2);
        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        verticalLayout->addWidget(checkBox_3);
        checkBox_4 = new QCheckBox(widget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        verticalLayout->addWidget(checkBox_4);
        checkBox_5 = new QCheckBox(widget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        verticalLayout->addWidget(checkBox_5);
        checkBox_6 = new QCheckBox(widget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        verticalLayout->addWidget(checkBox_6);
        checkBox_7 = new QCheckBox(widget);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        verticalLayout->addWidget(checkBox_7);
        checkBox_8 = new QCheckBox(widget);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        verticalLayout->addWidget(checkBox_8);
        checkBox_9 = new QCheckBox(widget);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        verticalLayout->addWidget(checkBox_9);
        checkBox_10 = new QCheckBox(widget);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));
        verticalLayout->addWidget(checkBox_10);
        checkBox_11 = new QCheckBox(widget);
        checkBox_11->setObjectName(QStringLiteral("checkBox_11"));
        verticalLayout->addWidget(checkBox_11);
        checkBox_12 = new QCheckBox(widget);
        checkBox_12->setObjectName(QStringLiteral("checkBox_12"));
        verticalLayout->addWidget(checkBox_12);
        checkBox_13 = new QCheckBox(widget);
        checkBox_13->setObjectName(QStringLiteral("checkBox_13"));
        verticalLayout->addWidget(checkBox_13);
        checkBox_14 = new QCheckBox(widget);
        checkBox_14->setObjectName(QStringLiteral("checkBox_14"));
        verticalLayout->addWidget(checkBox_14);
        checkBox_15 = new QCheckBox(widget);
        checkBox_15->setObjectName(QStringLiteral("checkBox_15"));
        verticalLayout->addWidget(checkBox_15);
        checkBox_16= new QCheckBox(widget);
        checkBox_16->setObjectName(QStringLiteral("checkBox_16"));
        verticalLayout->addWidget(checkBox_16);



        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "breakfast", nullptr));
        label_2->setText(QApplication::translate("Dialog", "lunch", nullptr));
        label_3->setText(QApplication::translate("Dialog", "dinner", nullptr));
        label_4->setText(QApplication::translate("Dialog", "snacks", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "potato", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "Milk", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "yogurt", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "Cheese", nullptr));
        checkBox_5->setText(QApplication::translate("MainWindow", "Rice", nullptr)); 
        checkBox_6->setText(QApplication::translate("MainWindow", "Pasta", nullptr));
        checkBox_7->setText(QApplication::translate("MainWindow", "Spaghetti", nullptr));
        checkBox_8->setText(QApplication::translate("MainWindow", "ChickenBreast", nullptr));
        checkBox_9->setText(QApplication::translate("MainWindow", "SweetPotato", nullptr));
        checkBox_10->setText(QApplication::translate("MainWindow", "Bread", nullptr));
        checkBox_11->setText(QApplication::translate("MainWindow", "Olive", nullptr));
        checkBox_12->setText(QApplication::translate("MainWindow", "Oat", nullptr));
        checkBox_13->setText(QApplication::translate("MainWindow", "Apple", nullptr));
        checkBox_14->setText(QApplication::translate("MainWindow", "Pistachio", nullptr));
        checkBox_15->setText(QApplication::translate("MainWindow", "Juice", nullptr));
        checkBox_16->setText(QApplication::translate("MainWindow", "Fashar", nullptr));


    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
