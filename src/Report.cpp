#include <string>
#include "../include/Report.h"

using namespace std;

Report::Report(Assignment* assignment, string answer):assignment(assignment),_answer(answer),_grade(0){}
Report::Report(){}
Report::~Report(){}

void Report::setGrade(float grade){
    _grade = grade;
}
void Report::setAnswer(string answer){
    _answer = answer;
} 
void Report::getReportDetails(){
    cout<<"****** REPORT DETAILS ****** \n";
    cout<<"Assignment's Question: \n";
    cout<<assignment->getAssignment();
    cout<<"\n";
    cout<<"Assignment's Answer: \n";
    cout<<_answer<<"\n";
    cout<<"Report's Grade: \n";
    if(_grade){
        cout<<_grade<<"\n";
    }
    else{
        cout<<"This report hasn't been evaluated yet! \n";
    }
     cout << "****** END REPORT ******\n";

}
