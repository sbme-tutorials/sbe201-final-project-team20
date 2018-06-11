#ifndef DIALOG_H
#define DIALOG_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_checkBox_10_clicked();

    void on_checkBox_11_clicked();

    void on_checkBox_clicked();

    void on_checkBox_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog *ui;
    std::vector<int> items;
    std::vector<double> values;
    std::vector<int> weightt;
};

#endif // DIALOG_H
