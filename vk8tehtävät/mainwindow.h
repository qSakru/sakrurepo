#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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
    void timeOut();



private slots:
    void on_player1Switch_clicked();

    void on_player2Switch_clicked();

    void on_timer1Button_clicked();

    void on_timer2Button_clicked();

    void on_startButton_clicked();

    void on_stopButton_clicked();


    void updateProgressBar();

private:
    Ui::MainWindow *ui=nullptr;

    void setGameInfoText(QString text, short player);
    int player1Time=0;
    int player2Time=0;
    int currentPlayer=0;
    int gameTime=0;
    QTimer * pQTimer=nullptr;
};
#endif // MAINWINDOW_H
