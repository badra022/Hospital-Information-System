/***************************************
 * [file name]: database
 *
 * [type]:	header file
 *
 * [LAYER]:	second layer
 *
 * [PROJECT]:	hospital information system
 *
 * [CREATOR]:	ahmed mohamed mohamed mohamed
 * *************************************/

/*************************************************************************
 *        				GUARDFILE
 * **********************************************************************/
#ifndef INFO_SYSTEM
#define INFO_SYSTEM
/*************************************************************************
 *                              INCLUDES
 * **********************************************************************/
#include <iostream>
#include <vector>
#include <utility>
#include<map>
#include "queue.cpp"
#include "heap.cpp"
#include<iterator>
#include<algorithm>
#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
using std::string;
using std::cin;
using std::cout;
using std::map;
/*************************************************************************
 *					        	MACROS
 ************************************************************************/
 #define N_DOCTORS 20 /* for example */
 #define N_ICU 		3  /* for example */
/*************************************************************************
 *                              DECLARATIONS
 * **********************************************************************/
class patient
{
    public:
        /* perosnal information of the patient*/
        string name;
        long long ID;
        string address;
        string phone;
        string birthDate;
        /* medical information of the patient*/
        string gender;
        string medicalHistory;
        string allergies;
        /* medical status measurements */
        struct
        {
            double bloodPressure;
            double heartRate;
            double temperature;
        }medicalStatus;
        /* public methods for the patient */
        /* methods displays the drugs taken by this patient in N days */
        void displayDrugs(int days);
};



class Icu
{
    public:
    /* Icus info */
        string name;
        long long icuCode;
        string manager;
        /* Number of beds available */
        int bed;
        /* list of the patients either FIFO or HEAP */
        queue <patient* > patientsList;
        pQueue <patient* > patientsPriorityList;
        /* constructor for the Icu's object */
        Icu();
        /* method for displaying the patient's list */
        void displayPatients_stack();
        void displayPatients_heap();
};


class doctor
{
public:
        /* personal info of the doctor */
        string name;
        string gender;
        string birthDate;
        string socialSecurityNumber;
        string majorScientificArea;
        string degree;
        /* list of his patients in the Icus*/
        std::vector < std::pair < patient* , int /*hours*/ > > listOfPatients;
        /* constructor for the doctor's object */
        doctor();
        /* method to display his list of patients */
        void displayPatients();
};


struct prescription
{
    /* patient that have the prescription */
    patient* p;
     /* pointer to the doctor's object who wrote this prescription */
     doctor* writer;
     /* the code that the prescription must contain */
     long long code;
     /* start date and end date (not able for operations , just for display*/
     string startDate;
     string endDate;
     /* list of each 'string' drug with it's repetitions integer per day (X days if you want the repetitions in some days)*/
     map <string , int> drugsList;
};


void addNewDoctor_function(void);
void addNewIcu_function(Icu* list);
void viewDoctorList_function(doctor* list);
void displayDoctorInfo_function(doctor* list , int doctor_num);
void viewIcuList_function(Icu* list);
void displayIcuInfo_function(Icu* list , int Icu_num);
void addPatient_function(int Icu_num);
void viewPatientList_function(int Icu_num);
void servicePatient_stack_function(int Icu_num , int doctor_num , int hours);
void servicePatient_heap_function(int Icu_num , int doctor_num , int hours);
void displayFullPatientInfo_function(patient* ppatient);

#endif
