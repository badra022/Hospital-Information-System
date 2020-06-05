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
#include "database.h"
#include "mainwindow.h"
#include <QApplication>
/*************************************************************************
 *                   EXTERNS (main variables created in other file)
 ************************************************************************/
 extern queue <patient* > mainPatientList;
 extern Icu IcuList[N_ICU];
 extern doctor doctorsList[N_DOCTORS];
/*************************************************************************
 *                              MAIN APPLICATION (GUI)
 * **********************************************************************/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
