#include <bits.h>
#include <string>
#include <vector>
#include "Assignment.h"




using namespace std;


#ifndef COURSE_H
#define COURSE_H
class Course {
    private:
        string _code;
        string _name;
        string _teacher;
        

    public:
    vector<Assignment>allAssignments;
      Course(string code,string name,string teacher);
      Course();
      ~Course();
      string getName();
      string getCode();
      string getTeacher();

};


#endif