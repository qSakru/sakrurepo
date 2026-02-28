#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    // ajastimen käynnistys
    pQTimer = new QTimer(this);
    connect(pQTimer, //lähettävä olio
            &QTimer::timeout, // signaali
            this, // vast.ot.olio
            &MainWindow::updateProgressBar); //slotti

}

MainWindow::~MainWindow()
{
    if (pQTimer) {
        pQTimer->stop();
        delete pQTimer;
        pQTimer = nullptr;
    }
    delete ui;

}

void MainWindow::setGameInfoText(QString text, short player)
{

    ui->label_2->setText(text);


}

void MainWindow::on_player1Switch_clicked()
{
    currentPlayer=2;
    setGameInfoText("Player 2 turn", 2);
}


void MainWindow::on_player2Switch_clicked()
{
    currentPlayer=1;
setGameInfoText("Player 1 turn", 1);
}


void MainWindow::on_timer1Button_clicked()
{
    //antaa 120 sek aikaa
    setGameInfoText("Ready to play? press start game!",1);
    gameTime=120;

        ui->progressBar->setRange(0, gameTime);
        ui->progressBar_2->setRange(0, gameTime);
        ui->progressBar->setValue(gameTime);
        ui->progressBar_2->setValue(gameTime);

}


void MainWindow::on_timer2Button_clicked()
{
    //antaa 5min aikaa
    setGameInfoText("Ready to play? press start game!",1);
    gameTime=300;

    ui->progressBar->setRange(0, gameTime);
    ui->progressBar_2->setRange(0, gameTime);
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);
}


void MainWindow::on_startButton_clicked()
{
    //estää käynnistyksen, jos aikaa ei ole valittu
    if (gameTime<=0) {
        setGameInfoText("Select playtime first!", 0);
        return;
    }
    //aloittaa pelin valikoidulla ajalla
    setGameInfoText("Game ongoing, player 1 turn", 1);
    player1Time = gameTime;
    player2Time = gameTime;
    currentPlayer = 1;
//ui:n alustukset
    ui->progressBar->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);
    ui->progressBar->setRange(0,gameTime);
    ui->progressBar_2->setRange(0,gameTime);



    if (!pQTimer->isActive())
    {
        pQTimer->start(1000);
    }
}


void MainWindow::on_stopButton_clicked()
{
    if (pQTimer) {
        pQTimer->stop();
    }

    player1Time=0;
    player2Time=0;

    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
    qDebug()<<"Game stopping."<<Qt::endl;
    setGameInfoText("Game stopping", 1);

}




void MainWindow::updateProgressBar()
{
    if (currentPlayer==1) {

        if (player1Time <=0) {
            pQTimer->stop();
            qDebug()<<"Player 1 lost!"<<Qt::endl;
            setGameInfoText("Player 1 lost!",1);
            return;

        }

        player1Time = player1Time -1;
    ui->progressBar->setValue(player1Time);
    }


     else if (currentPlayer ==2) {
         if (player2Time==0) {
            pQTimer->stop();
            qDebug()<<"Player 2 lost!"<<Qt::endl;
            setGameInfoText("Player 2 lost!",2);

        }

        player2Time = player2Time -1;
        ui->progressBar_2->setValue(player2Time);
    }
}
