#include<iostream>
#include<string>
#include"Assignment.h"

using namespace std;
#ifndef REPORT_H
#define REPORT_H
class Report{

    private:
        Assignment* assignment;
        string _answer;
        float _grade;

    public:
        Report(Assignment* assignment,string answer);
        Report();
        ~Report();
        void setGrade(float grade);
        void setAnswer(string answer); 
        void getReportDetails();

};
#endif