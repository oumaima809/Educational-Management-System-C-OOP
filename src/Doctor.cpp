#include <bits.h>
#include <string>
#include <iostream>
#include "../include/Doctor.h"
#include "../include/Student.h"
#include "../include/Course.h"
#include "../include/Assignment.h"



using namespace std;

Doctor::Doctor(string userName , string firstName , string lastName, string email, string password):
   _userName(userName),_firstName(firstName),_lastName(lastName),_email(email),_password(password)
   {}

Doctor::Doctor(){}
Doctor::~Doctor(){}
/*****************************Create Course Method ***************************/
Course* Doctor::createCourse(string code,string name){
    string teacher = this->_lastName;
    Course* newCourse = new Course(code,name,teacher);
    this->myCourses.push_back(newCourse);
    return newCourse;
    
}
/***************************List Courses Method ******************************/
void Doctor::listCourses(){
    cout<<"My courses list:\n";
    string courseName,courseCode;
    for(int i=0;i<this->myCourses.size();i++)
    {
        courseName = myCourses[i]->getName();
        courseCode = myCourses[i]->getCode();
        cout<<i<<") "<<courseName<<" - code "<<courseCode<<"\n";
    }
}
/*************************Create Assignment Method *************************/
void Doctor::createAssignment(string assignmentQ, Course* course)
{
    Assignment* newAssignment = new Assignment(assignmentQ);
    vector<Assignment*>& allAssignments = course->getAssignments();
    allAssignments.push_back(newAssignment);
    cout<<"new assignment: "<<newAssignment->getAssignment()<<" is created in course: "<<course->getName()<<"\n";

}
/*********************View Assignment Method *****************************/
void Doctor::viewAssignment(Course* course)
{
    string assignment;
    vector<Assignment*>& allAssignments=course->getAssignments();
    for(int i=0;i<allAssignments.size();i++)
    {
        assignment = allAssignments[i]->getAssignment();
        cout<<assignment<<"\n";
    }
}
/*********************View Course Method  ***********************************/
void Doctor::viewCourse(Course* course){
    course->getCourseDetails();
}

