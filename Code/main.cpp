/***************************************
 * [file name]: main
 *
 * [type]:	source file
 *
 * [LAYER]:	last layer (GUI)
 *
 * [PROJECT]:	hospital information system
 *
 * [CREATOR]:	Ahmed mohamed mohamed mohamed
 * *************************************/

/*************************************************************************
 *                              INCLUDES
 * **********************************************************************/
#include "database.cpp"
#include "mainwindow.h"
#include <QApplication>
/*************************************************************************
 *                   EXTERNS (main variables created in other file)
 ************************************************************************/
 std::vector <patient* > mainPatientList;
 std::vector <Icu*> IcuList;
 std::vector <doctor*> doctorsList;
 std::vector <prescription*> prescriptionList;
/*************************************************************************
 *                              MAIN APPLICATION (GUI)
 * **********************************************************************/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qDebug() << "welcome!";
    return a.exec();
}
