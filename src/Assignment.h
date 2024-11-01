#include "bits.h"
#include <string>

using namespace std;
#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H


class Assignment{
    private:
       string _assignmentQ;
       string _assignmentA;
       double _grade;


    public:
       Assignment(string assignmentQ);
       Assignment();
       ~Assignment();
       double getgrade(){
        return _grade;
       }
       void setgrade(double grade){
        _grade = grade;
       }
       string getAssignment(){
         return _assignmentQ;
       }
       

};
#endif