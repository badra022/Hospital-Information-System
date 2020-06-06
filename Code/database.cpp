/***************************************
 * [file name]: database
 *
 * [type]:	source file
 *
 * [LAYER]:	second layer
 *
 * [PROJECT]:	hospital information system
 *
 * [CREATOR]:	ahmed mohamed mohamed mohamed
 * *************************************/

/*************************************************************************
 *                              INCLUDES
 * **********************************************************************/
#include "database.h"
/*****************************************************************************
 *                  GLOBAL VARIABLES TO THIS FILE (EXTERNED FROM MAIN.CPP)
 ****************************************************************************/
 extern std::vector <patient* > mainPatientList;
 extern std::vector <Icu*> IcuList;
 extern std::vector <doctor*> doctorsList;
 extern std::vector <prescription*> prescriptionList;
/*************************************************************************
 *                              DEFINITIONS
 * **********************************************************************/

////void doctor::displayPatients()
////{
////     if(!this->listOfPatients.size())
////     {
////          cout << "empty list!";
////     }
////     for(auto p : this->listOfPatients)
////     {
////          cout << "patient's name: "<< p.first->name << "\t" << "patient's ID: " << p.first->ID << "\n";
////          cout << "spent hours: " << p.second;
////     }
////}

////void patient::displayDrugs(int days)
////{


////static void displayPatientName(patient* ppatient)
////{
////     cout << ppatient->name << "\n";
////}

////void Icu::displayPatients_stack()
////{
////     this->patientsList.TraverseQueue(&displayPatientName);
////}

//void addNewDoctor_function(doctor* list)
//{

//}

//void viewDoctorList_function(doctor* list)
//{
//     /* if the first doctor is null then there's no doctors in the list */
//  if(list[0].name == "null")
//  {
//    cout << "empty list! please enter doctors' data.";
//  }
//  int i = 0;
//  /* printing doctors until the first null name in the doctor's list or until the end of array */
//  while(i < N_ICU && list[i].name != "null")
//  {
//    cout << i << "." << list[i].name << "\n";
//    i++;
//  }
//}

//void displayDoctorInfo_function(doctor* list , int i)
//{
//     /* displaying the info of the doctor with certain index in the list */
//  cout << "doctor's name: " << list[i].name << "\n";
//  cout << "doctor's gender: " << list[i].gender << "\n";
//  cout << "doctor's birth date: " << list[i].birthDate << "\n";
//  cout << "doctor's social security number: " << list[i].socialSecurityNumber << "\n";
//  cout << "doctor's major scientific area: " << list[i].majorScientificArea << "\n";
//  cout << "doctor's degree: " << list[i].degree << "\n";
//}


//void addNewIcu_function(Icu* list)
//{
//  /* using the Icu's list we will fill the data of the available seat */
//  int i = 0;
//  while(list[i].name != "null")
//  {
//    i++;
//  }
//  cout << "enter ICU's name: ";
//  cin >> list[i].name;
//  cout << "enter the ICU code: ";
//  cin >> list[i].icuCode;
//  cout << "enter the manager's name: ";
//  cin >> list[i].manager;
//  cout << "enter the number of beds in the Icu: ";
//  cin >> list[i].bed;
//}

//void viewIcuList_function(Icu* list)
//{
//  if(list[0].name == "null")
//  {
//    cout << "empty list! please enter ICUs data.";
//  }
//  int i = 0;
//  while(i < N_ICU && list[i].name == "null")
//  {
//    cout << i << "." << list[i].name << "\n";
//    i++;
//  }
//}

//void displayIcuInfo_function(Icu* list , int i)
//{
//  cout << "ICU's name: " << list[i].name << "\n";
//  cout << "ICU code: " << list[i].icuCode << "\n";
//  cout << "manager's name: " << list[i].manager << "\n";
//  cout << "number of beds in the Icu: " <<list[i].bed << "\n";
//}

////void addPatient_function(int Icu_num)
////{
////     char answer;
////     patient* ppatient = new patient();
////     cout << "enter patient's name: ";
////     cin >> ppatient->name;
////     cout << "enter patient's phone: ";
////     cin >> ppatient->phone;
////     do{
////     cout << "enter unique patient's ID (7 numbers): ";
////     cin >> ppatient->ID;
////     }while(mainPatientList.find(ppatient->ID));
////     cout << "enter patient's address: ";
////     cin >> ppatient->address;
////     cout << "enter patient's birth date: ";
////     cin >> ppatient->birthDate;
////     cout << "enter patient's gender: ";
////     cin >> ppatient->gender;
////     cout << "does he has medical history(Y/N): ";
////     cin >> answer;
////     if(answer == 'Y')
////     {
////     cout << "enter the medical history: ";
////     cin >> ppatient->medicalHistory;
////     }
////     cout << "does he has any allergies(Y/N): ";
////     cin >> answer;
////     if(answer == 'Y')
////     {
////     cout << "enter the allergies: ";
////     cin >> ppatient->allergies;
////     }
////     cout << "enter blood pressure number: ";
////     cin >> ppatient->medicalStatus.bloodPressure;
////     cout << "enter heart rate number: ";
////     cin >> ppatient->medicalStatus.heartRate;
////     cout << "enter body temperature: ";
////     cin >> ppatient->medicalStatus.temperature;
////     /* adding the patient pointer to the data list in the icu */
////     IcuList[Icu_num].patientsList.enqueue(ppatient);
////     IcuList[Icu_num].patientsPriorityList.insert(ppatient);
////     /* add the pointer to patient to the main program stack in the runtime */
////     mainPatientList.enqueue(ppatient);
////}

////static void printPatient(patient* p)
////{
////     /* print the passed patient's name */
////     cout << "-" << p->name << "\n";
////}
////void viewPatientList_function(int Icu_num)
////{
////     /* traverse the stack to print the name of each patient in the stack of patients in the Icu */
////     IcuList[Icu_num].patientsList.TraverseQueue(&printPatient);
////}

////void servicePatient_stack_function(int Icu_num , int doctor_num , int hours)
////{
////     /* function to document that the patient in (Icu_num) is visited for (N hours) by the doctor (doctor_num) */
////     doctorsList[doctor_num].listOfPatients.push_back(std::make_pair(IcuList[Icu_num].patientsList.dequeue() , hours));
////}

////void servicePatient_heap_function(int Icu_num , int doctor_num , int hours)
////{
////     /* function to document that the patient in (Icu_num) is visited for (N hours) by the doctor (doctor_num) */
////     doctorsList[doctor_num].listOfPatients.push_back(std::make_pair(IcuList[Icu_num].patientsPriorityList.extract() , hours));
////}

////void displayFullPatientInfo_function(patient* ppatient)
////{
////     char answer;
////     /* displaying all the info for this patient */
////     cout << "patient's name: " << ppatient->name << "\n";
////     cout << "patient's phone: " << ppatient->phone << "\n";
////     cout << "unique patient's ID (7 numbers): " << ppatient->ID;
////     cout << "patient's address: " << ppatient->address;
////     cout << "patient's birth date: " << ppatient->birthDate;
////     cout << "patient's gender: " << ppatient->gender;
////     cout << "does he has medical history(Y/N): ";
////     cin >> answer;
////     if(answer == 'Y')
////     {
////       cout << "the medical history: " << ppatient->medicalHistory;
////     }
////     cout << "does he has any allergies(Y/N): ";
////     cin >> answer;
////     if(answer == 'Y')
////     {
////       cout << "the allergies: " << ppatient->allergies;
////     }
////     cout << "blood pressure number: " << ppatient->medicalStatus.bloodPressure;
////     cout << "heart rate number: " << ppatient->medicalStatus.heartRate;
////     cout << "body temperature: " << ppatient->medicalStatus.temperature;
////}
