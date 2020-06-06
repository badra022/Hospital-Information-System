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
    QAction *actionpatients;
    QAction *actiondoctors;
    QAction *actionicus;
    QAction *actionprescriptions;
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuNew;
    QMenu *menuview;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(412, 167);
        actionnewPatient = new QAction(MainWindow);
        actionnewPatient->setObjectName(QString::fromUtf8("actionnewPatient"));
        actionnewDoctor = new QAction(MainWindow);
        actionnewDoctor->setObjectName(QString::fromUtf8("actionnewDoctor"));
        actionnewIcu = new QAction(MainWindow);
        actionnewIcu->setObjectName(QString::fromUtf8("actionnewIcu"));
        actionnewPrescription = new QAction(MainWindow);
        actionnewPrescription->setObjectName(QString::fromUtf8("actionnewPrescription"));
        actionpatients = new QAction(MainWindow);
        actionpatients->setObjectName(QString::fromUtf8("actionpatients"));
        actiondoctors = new QAction(MainWindow);
        actiondoctors->setObjectName(QString::fromUtf8("actiondoctors"));
        actionicus = new QAction(MainWindow);
        actionicus->setObjectName(QString::fromUtf8("actionicus"));
        actionprescriptions = new QAction(MainWindow);
        actionprescriptions->setObjectName(QString::fromUtf8("actionprescriptions"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 90, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 412, 22));
        menuNew = new QMenu(menubar);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        menuview = new QMenu(menubar);
        menuview->setObjectName(QString::fromUtf8("menuview"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuNew->menuAction());
        menubar->addAction(menuview->menuAction());
        menuNew->addAction(actionnewPatient);
        menuNew->addAction(actionnewDoctor);
        menuNew->addAction(actionnewIcu);
        menuNew->addAction(actionnewPrescription);
        menuview->addAction(actionpatients);
        menuview->addAction(actiondoctors);
        menuview->addAction(actionicus);
        menuview->addAction(actionprescriptions);

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
        actionpatients->setText(QCoreApplication::translate("MainWindow", "patients", nullptr));
        actiondoctors->setText(QCoreApplication::translate("MainWindow", "doctors", nullptr));
        actionicus->setText(QCoreApplication::translate("MainWindow", "icus", nullptr));
        actionprescriptions->setText(QCoreApplication::translate("MainWindow", "prescriptions", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        menuNew->setTitle(QCoreApplication::translate("MainWindow", "New", nullptr));
        menuview->setTitle(QCoreApplication::translate("MainWindow", "view", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
