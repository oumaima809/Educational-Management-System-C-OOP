#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "Course.h"
#include "Report.h"


using namespace std;

class Student {
private:
    string _userName;
    string _firstName;
    string _lastName;
    string _email;
    string _password;
    vector<Course*> myCourses;
    vector<Report*>myReports;

public:
    Student();
    Student(string userName, string firstName, string lastName, string email, string password);
    ~Student();

    void registerCourse(Course* course);
    void listMyCourses() ;
    void viewCourse(Course* course) ;
    void returnReport(Assignment* assignment, std::string answer);
    void listMyReports() ;
};

#endif // STUDENT_H
