#include "dialog.h"
#include "ui_dialog.h"
#include"mainwindow.h"
#include "dialog2.h"
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;  

}

void Dialog::on_checkBox_10_clicked()
{
    values.push_back(2.05);
    weightt.push_back(10);
    items.push_back(1);
}


void Dialog::on_checkBox_11_clicked()
{
    values.push_back(12.96);
    weightt.push_back(313);
    items.push_back(2);
}

void Dialog::on_checkBox_clicked()
{
    values.push_back(16.89);
    weightt.push_back(389);
    items.push_back(3);
}

void Dialog::on_checkBox_2_clicked()
{
    values.push_back(14);
    weightt.push_back(369);
    items.push_back(4);
}

void Dialog::on_pushButton_clicked()
{
    double *arrray[4];
        for (int row = 0; row < 4; row++)
        {
            arrray[row] = new double[20];
        }
    void knapsack(arrray,  values, weightt)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                if (i == 0 || j == 0)
                {
                    arrray[i][j] = 0;
                }

                else if (weightt[i - 1] > j)
                {
                    arrray[i][j] = arrray[i - 1][j];
                }
                else
                    arrray[i][j] = std::max(arrray[i - 1][j], values[i - 1] + arrray[i - 1][j - weightt[i - 1]]);
            }
        }
    }
    int maxi(arrray)
    {
        int max = array[0][0];
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                if (array[i][j] > max)
                {
                    max = array[i][j];
                }
            }
        }
        return max;
    }
    ui->lcdNumber->display(maxi);
}

void Dialog::on_pushButton_2_clicked()
{
    Dialog2 openn;
        openn.setModal(true);
        openn.exec();
}
