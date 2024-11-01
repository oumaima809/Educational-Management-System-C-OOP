#include <bits.h>
#include <string>
#include <iostream>
#include "Doctor.h"
#include "Student.h"
#include "Course.h"
#include "Assignment.h"



using namespace std;

Doctor::Doctor(string userName , string firstName , string lastName, string email, string password):
   _userName(userName),_firstName(firstName),_lastName(lastName),_email(email),_password(password)
   {}

Doctor::Doctor(){}
Doctor::~Doctor(){}
void Doctor::createCourse(string code,string name){
    string teacher = this->_lastName;
    Course newCourse = Course(code,name,teacher);
    this->myCourses.push_back(newCourse);
    
}
void Doctor::listCourses(){
    cout<<"My courses list:\n";
    string courseName,courseCode;
    for(int i=0;i<this->myCourses.size();i++)
    {
        courseName = myCourses[i].getName();
        courseCode = myCourses[i].getCode();
        cout<<i<<") "<<courseName<<" - code "<<courseCode<<"\n";
    }
}

void Doctor::createAssignment(string assignmentQ, Course course)
{
    Assignment newAssignment = Assignment(assignmentQ);
    course.allAssignments.push_back(newAssignment);

}
void Doctor::viewAssignment(Course course)
{
    string assignment;
    for(int i=0;i<course.allAssignments.size();i++)
    {
        assignment = course.allAssignments[i].getAssignment();
        cout<<assignment<<"\n";
    }
}

