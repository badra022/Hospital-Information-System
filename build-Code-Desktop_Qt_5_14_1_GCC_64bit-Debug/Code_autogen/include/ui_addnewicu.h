/********************************************************************************
** Form generated from reading UI file 'addnewicu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWICU_H
#define UI_ADDNEWICU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_addNewIcu
{
public:

    void setupUi(QDialog *addNewIcu)
    {
        if (addNewIcu->objectName().isEmpty())
            addNewIcu->setObjectName(QString::fromUtf8("addNewIcu"));
        addNewIcu->resize(480, 640);

        retranslateUi(addNewIcu);

        QMetaObject::connectSlotsByName(addNewIcu);
    } // setupUi

    void retranslateUi(QDialog *addNewIcu)
    {
        addNewIcu->setWindowTitle(QCoreApplication::translate("addNewIcu", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewIcu: public Ui_addNewIcu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWICU_H
