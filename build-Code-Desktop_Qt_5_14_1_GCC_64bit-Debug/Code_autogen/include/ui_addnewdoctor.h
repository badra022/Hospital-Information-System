/********************************************************************************
** Form generated from reading UI file 'addnewdoctor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWDOCTOR_H
#define UI_ADDNEWDOCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_addNewDoctor
{
public:

    void setupUi(QDialog *addNewDoctor)
    {
        if (addNewDoctor->objectName().isEmpty())
            addNewDoctor->setObjectName(QString::fromUtf8("addNewDoctor"));
        addNewDoctor->resize(480, 640);

        retranslateUi(addNewDoctor);

        QMetaObject::connectSlotsByName(addNewDoctor);
    } // setupUi

    void retranslateUi(QDialog *addNewDoctor)
    {
        addNewDoctor->setWindowTitle(QCoreApplication::translate("addNewDoctor", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewDoctor: public Ui_addNewDoctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWDOCTOR_H
