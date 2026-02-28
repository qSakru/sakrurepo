/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QLabel *label_2;
    QPushButton *player1Switch;
    QPushButton *player2Switch;
    QPushButton *timer1Button;
    QPushButton *timer2Button;
    QPushButton *startButton;
    QPushButton *stopButton;
    QMenuBar *menubar;
    QMenu *menuShakkikello;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(493, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(60, 40, 118, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(290, 40, 118, 23));
        progressBar_2->setValue(24);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 140, 331, 20));
        player1Switch = new QPushButton(centralwidget);
        player1Switch->setObjectName("player1Switch");
        player1Switch->setGeometry(QRect(79, 80, 81, 31));
        player2Switch = new QPushButton(centralwidget);
        player2Switch->setObjectName("player2Switch");
        player2Switch->setGeometry(QRect(310, 80, 81, 31));
        timer1Button = new QPushButton(centralwidget);
        timer1Button->setObjectName("timer1Button");
        timer1Button->setGeometry(QRect(130, 180, 80, 24));
        timer2Button = new QPushButton(centralwidget);
        timer2Button->setObjectName("timer2Button");
        timer2Button->setGeometry(QRect(260, 180, 80, 24));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(70, 230, 101, 41));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(300, 230, 101, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 493, 21));
        menuShakkikello = new QMenu(menubar);
        menuShakkikello->setObjectName("menuShakkikello");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuShakkikello->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QString());
        player1Switch->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        player2Switch->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        timer1Button->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        timer2Button->setText(QCoreApplication::translate("MainWindow", "5min", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
        menuShakkikello->setTitle(QCoreApplication::translate("MainWindow", "Shakkikello", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
