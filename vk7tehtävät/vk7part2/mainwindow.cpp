#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{

    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->text();


    if (state == 1) {
        n1.append(name);
        ui->num1LineEdit->setText(n1);
    } else {
        n2.append(name);
        ui->num2LineEdit->setText(n2);
    }
}


void MainWindow::on_plusbutton_clicked()
{
    operand = 0;
    addSubMulDivClickHandler();
    qDebug()<<"+";

}


void MainWindow::on_num1_clicked()
{
    numberClickedHandler();
    qDebug()<<"1";

}


void MainWindow::on_num2_clicked()
{
   numberClickedHandler();
    qDebug()<<"2";
}


void MainWindow::on_num3_clicked()
{
numberClickedHandler();
    qDebug()<<"3";
}


void MainWindow::on_num4_clicked()
{
numberClickedHandler();
    qDebug()<<"4";
}


void MainWindow::on_num5_clicked()
{
numberClickedHandler();
    qDebug()<<"5";
}


void MainWindow::on_num6_clicked()
{
numberClickedHandler();
    qDebug()<<"6";
}


void MainWindow::on_num7_clicked()
{
numberClickedHandler();
    qDebug()<<"7";
}


void MainWindow::on_num8_clicked()
{
numberClickedHandler();
    qDebug()<<"8";
}


void MainWindow::on_num9_clicked()
{
numberClickedHandler();
    qDebug()<<"9";
}


void MainWindow::on_num0_clicked()
{
numberClickedHandler();
    qDebug()<<"0";
}


void MainWindow::on_clearButton_clicked()
{
    n1 = "";
    n2 = "";
    state = 1;
    ui->num1LineEdit->clear();
    ui->num2LineEdit->clear();
    ui->resultLineEdit->clear();
    qDebug()<<"Clearing..";
}


void MainWindow::on_enterButton_clicked()
{
    float num1 = n1.toFloat();
    float num2 = n2.toFloat();


    if (operand == 0) result = num1 + num2;
    else if (operand == 1) result = num1 - num2;
    else if (operand == 2) result = num1 * num2;
    else if (operand == 3) {
        if(num2 != 0) result = num1 / num2;
        else result = 0;
    }


    ui->resultLineEdit->setText(QString::number(result));
    qDebug()<<"= "<<result;

}





void MainWindow::on_minusButton_clicked()
{
    operand = 1;
    addSubMulDivClickHandler();
    qDebug()<<"-";
}


void MainWindow::on_multiplyButton_clicked()
{
    operand = 2;
    addSubMulDivClickHandler();
    qDebug()<<"*";

}


void MainWindow::on_divideButton_clicked()
{
    operand = 3;
    addSubMulDivClickHandler();
    qDebug()<<"/";
}

void MainWindow::addSubMulDivClickHandler() {
    state = 2;
}
