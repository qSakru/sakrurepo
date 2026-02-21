#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_plusbutton_clicked();

    void on_num1_clicked();

    void on_num2_clicked();

    void on_num3_clicked();

    void on_num4_clicked();

    void on_num5_clicked();

    void on_num6_clicked();

    void on_num7_clicked();

    void on_num8_clicked();

    void on_num9_clicked();

    void on_num0_clicked();

    void on_clearButton_clicked();

    void on_enterButton_clicked();

    void on_minusButton_clicked();

    void on_multiplyButton_clicked();

    void on_divideButton_clicked();

private:
    Ui::MainWindow *ui;
    QString n1= "";
    QString n2= "";
    int state=1;
    float result;
    short operand;

    void numberClickedHandler();
    void clearAndEnterClickedHandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();

};
#endif // MAINWINDOW_H
