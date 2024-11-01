#include "bits.h"
#include <string>
#include<iostream>
#include "../include/Course.h"

using namespace std;


Course::Course(string code,string name,string teacher):
  _code(code),_name(name),_teacher(teacher){}
Course::Course(){}
Course::~Course(){ 
  for (auto assignment : allAssignments) {
            delete assignment; 
            cout<<"assignment deleted";
        }
  
}
string Course::getName(){
  return _name;
}
string Course::getCode(){
  return _code;
}
string Course::getTeacher(){
  return _teacher;
}

vector<Assignment*>& Course::getAssignments(){
      return allAssignments;
    }

void Course::getCourseDetails(){
  cout<<"Course Name: "<<getName()<<"\n";
  cout<<"Course code is: "<<getCode()<<"\n";
  cout<<"This course is teached by Dr."<<getTeacher()<<"\n";
  int nAssignments = allAssignments.size();
  if(nAssignments)
  {
    if(nAssignments>1)cout<<"There are "<<allAssignments.size()<<" assignments in this course:\n";
    else cout<<"There is "<<allAssignments.size()<<" assignment in this course:\n";
    for (auto assignment:allAssignments)
    {
      cout<<assignment->getAssignment()<<"\n";
    }
  }
  else cout<<"There is no assignment available!\n";
}
