#include <bits.h>
#include "../include/Student.h"
#include <iostream>

using namespace std;

Student::Student(string userName, string firstName, string lastName, string email, string password):
           _userName(userName),_firstName(firstName),_lastName(lastName),_email(email),_password(password){}
Student::Student(){}
Student::~Student(){}

void Student::registerCourse(Course* course){
    myCourses.push_back(course);
}

void Student::listMyCourses(){
    for(auto course: myCourses){
        cout<<course->getName()<<"\n";
    }
}

void Student::viewCourse(Course* course){
    course->getCourseDetails();
}

void Student::returnReport(Assignment* assignment, string answer){
    Report* newReport = new Report(assignment,answer);
    myReports.push_back(newReport);
}

void Student::listMyReports(){
    for(auto report: myReports){
        report->getReportDetails();
    }
}



