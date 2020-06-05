/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
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
    QAction *actionnewPatient;
    QAction *actionnewDoctor;
    QAction *actionnewIcu;
    QAction *actionnewPrescription;
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuNew;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionnewPatient = new QAction(MainWindow);
        actionnewPatient->setObjectName(QString::fromUtf8("actionnewPatient"));
        actionnewDoctor = new QAction(MainWindow);
        actionnewDoctor->setObjectName(QString::fromUtf8("actionnewDoctor"));
        actionnewIcu = new QAction(MainWindow);
        actionnewIcu->setObjectName(QString::fromUtf8("actionnewIcu"));
        actionnewPrescription = new QAction(MainWindow);
        actionnewPrescription->setObjectName(QString::fromUtf8("actionnewPrescription"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(680, 520, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuNew = new QMenu(menubar);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNew->menuAction());
        menuNew->addAction(actionnewPatient);
        menuNew->addAction(actionnewDoctor);
        menuNew->addAction(actionnewIcu);
        menuNew->addAction(actionnewPrescription);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionnewPatient->setText(QCoreApplication::translate("MainWindow", "newPatient", nullptr));
        actionnewDoctor->setText(QCoreApplication::translate("MainWindow", "newDoctor", nullptr));
        actionnewIcu->setText(QCoreApplication::translate("MainWindow", "newIcu", nullptr));
        actionnewPrescription->setText(QCoreApplication::translate("MainWindow", "newPrescription", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        menuNew->setTitle(QCoreApplication::translate("MainWindow", "New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
