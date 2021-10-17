#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int t_studentId, const char t_name[]) {
  strcpy(name,t_name);
  studentId= t_studentId;
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID : "<<studentId<<endl;
  cout<<"Student name : "<<name<<endl;
}