/********************************************************************************
** Form generated from reading UI file 'addnewprescription.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWPRESCRIPTION_H
#define UI_ADDNEWPRESCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_addNewPrescription
{
public:

    void setupUi(QDialog *addNewPrescription)
    {
        if (addNewPrescription->objectName().isEmpty())
            addNewPrescription->setObjectName(QString::fromUtf8("addNewPrescription"));
        addNewPrescription->resize(480, 640);

        retranslateUi(addNewPrescription);

        QMetaObject::connectSlotsByName(addNewPrescription);
    } // setupUi

    void retranslateUi(QDialog *addNewPrescription)
    {
        addNewPrescription->setWindowTitle(QCoreApplication::translate("addNewPrescription", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewPrescription: public Ui_addNewPrescription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWPRESCRIPTION_H
