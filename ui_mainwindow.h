/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *action8_2;
    QAction *action32;
    QAction *action16;
    QAction *action64;
    QAction *action128;
    QAction *action256;
    QWidget *centralWidget;
    QLineEdit *txtNum;
    QPushButton *binaryButton;
    QPushButton *decimalButton;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuBinary_Deciminal_Converter;
    QMenu *menuBits;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(279, 160);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        action8_2 = new QAction(MainWindow);
        action8_2->setObjectName(QStringLiteral("action8_2"));
        action8_2->setCheckable(true);
        action32 = new QAction(MainWindow);
        action32->setObjectName(QStringLiteral("action32"));
        action32->setCheckable(true);
        action16 = new QAction(MainWindow);
        action16->setObjectName(QStringLiteral("action16"));
        action16->setCheckable(true);
        action64 = new QAction(MainWindow);
        action64->setObjectName(QStringLiteral("action64"));
        action64->setCheckable(true);
        action128 = new QAction(MainWindow);
        action128->setObjectName(QStringLiteral("action128"));
        action128->setCheckable(true);
        action256 = new QAction(MainWindow);
        action256->setObjectName(QStringLiteral("action256"));
        action256->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        txtNum = new QLineEdit(centralWidget);
        txtNum->setObjectName(QStringLiteral("txtNum"));
        txtNum->setGeometry(QRect(10, 10, 261, 20));
        binaryButton = new QPushButton(centralWidget);
        binaryButton->setObjectName(QStringLiteral("binaryButton"));
        binaryButton->setGeometry(QRect(10, 40, 131, 61));
        decimalButton = new QPushButton(centralWidget);
        decimalButton->setObjectName(QStringLiteral("decimalButton"));
        decimalButton->setGeometry(QRect(140, 40, 131, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 100, 91, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 279, 18));
        menuBinary_Deciminal_Converter = new QMenu(menuBar);
        menuBinary_Deciminal_Converter->setObjectName(QStringLiteral("menuBinary_Deciminal_Converter"));
        menuBits = new QMenu(menuBinary_Deciminal_Converter);
        menuBits->setObjectName(QStringLiteral("menuBits"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuBinary_Deciminal_Converter->menuAction());
        menuBinary_Deciminal_Converter->addAction(menuBits->menuAction());
        menuBinary_Deciminal_Converter->addAction(actionExit);
        menuBits->addAction(action8_2);
        menuBits->addAction(action16);
        menuBits->addAction(action32);
        menuBits->addAction(action64);
        menuBits->addAction(action128);
        menuBits->addAction(action256);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Binary-Deciminal Converter", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        action8_2->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        action32->setText(QApplication::translate("MainWindow", "32", Q_NULLPTR));
        action16->setText(QApplication::translate("MainWindow", "16", Q_NULLPTR));
        action64->setText(QApplication::translate("MainWindow", "64", Q_NULLPTR));
        action128->setText(QApplication::translate("MainWindow", "128", Q_NULLPTR));
        action256->setText(QApplication::translate("MainWindow", "256", Q_NULLPTR));
        binaryButton->setText(QApplication::translate("MainWindow", "Binary", Q_NULLPTR));
        decimalButton->setText(QApplication::translate("MainWindow", "Deciminal", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "github.com/AHXR", Q_NULLPTR));
        menuBinary_Deciminal_Converter->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuBits->setTitle(QApplication::translate("MainWindow", "Bits", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
