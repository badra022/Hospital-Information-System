/********************************************************************************
** Form generated from reading UI file 'addnewpatient.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWPATIENT_H
#define UI_ADDNEWPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_addNewPatient
{
public:

    void setupUi(QDialog *addNewPatient)
    {
        if (addNewPatient->objectName().isEmpty())
            addNewPatient->setObjectName(QString::fromUtf8("addNewPatient"));
        addNewPatient->resize(480, 635);

        retranslateUi(addNewPatient);

        QMetaObject::connectSlotsByName(addNewPatient);
    } // setupUi

    void retranslateUi(QDialog *addNewPatient)
    {
        addNewPatient->setWindowTitle(QCoreApplication::translate("addNewPatient", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewPatient: public Ui_addNewPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWPATIENT_H
