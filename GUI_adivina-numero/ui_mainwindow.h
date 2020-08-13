/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *contador;
    QLabel *label_4;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(448, 559);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 230, 231, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);\n"
"font-size:20px;\n"
"border-radius:15px;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 130, 431, 51));
        label->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 300, 111, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"color: rgb(238, 238, 236);\n"
"font:bold;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 100, 71, 19));
        contador = new QLabel(centralwidget);
        contador->setObjectName(QString::fromUtf8("contador"));
        contador->setGeometry(QRect(230, 100, 21, 19));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(250, 100, 71, 19));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 451, 81));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);"));
        label_3->setAlignment(Qt::AlignCenter);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(170, 190, 104, 31));
        textEdit->setStyleSheet(QString::fromUtf8("\n"
"border-color:green;\n"
""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 190, 141, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 350, 311, 131));
        label_6->setLayoutDirection(Qt::LeftToRight);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 448, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "PROBAR", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#4e9a06;\">INFORMACI\303\223N</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Iniciar", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Intentos :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        contador->setText(QApplication::translate("MainWindow", "<html><head/><body><p>0</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p>/ 10</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#eeeeec;\">Adivina el n\303\272mero  al azar </span></p><p align=\"center\"><span style=\" font-weight:600; color:#eeeeec;\">entre 0 a 1000</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">1) Click en iniciar para empezar el minijuego </span></p><p><span style=\" font-size:10pt;\">2) La computadora solo te dir\303\241 si es mayor o menor</span></p><p><span style=\" font-size:10pt;\">3) Solo tienes 10 intentos. \302\241suerte!</span></p><p><span style=\" font-size:10pt;\">Desarollado por Julian Guillermo Zapata Rugeles</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
