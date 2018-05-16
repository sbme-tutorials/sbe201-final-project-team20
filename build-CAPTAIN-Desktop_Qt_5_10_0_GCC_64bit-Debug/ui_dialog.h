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
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
