#include <iostream>
#include "../include/Doctor.h"
#include "../include/Student.h"
#include "../include/Course.h"
#include "../include/Assignment.h"


using namespace std;

int main(){

    Doctor* Joe =new  Doctor("doc124","Joe","Dao","dao@gmail.com","helloworld");
    Course* firstCourse=Joe->createCourse("cs01","data structure") ;
    Course* secondCourse=Joe->createCourse("cs01","Complexity") ;
    Course* thirdCourse=Joe->createCourse("cs01","Divide & Conquer") ;
    //Joe->listCourses();
    Assignment* assignment1=Joe->createAssignment("Exercice 2 page 16",firstCourse);
    Assignment* assignment2=Joe->createAssignment("Exercice 2,3,and 4 page 10",secondCourse);
    Assignment* assignment3=Joe->createAssignment("Exercice 4 page 5",firstCourse);
    //Joe->viewAssignment(firstCourse);
    //Joe->viewCourse(secondCourse);
    cout<<"/********************** Oumaima********************************************\n";
    Student* oumaima = new Student("st114","oumaima","guesmi","oumaima@gmail.com","test123");
    oumaima->registerCourse(firstCourse);
    oumaima->registerCourse(secondCourse);
    oumaima->registerCourse(thirdCourse);
    //oumaima->listMyCourses();
    //oumaima->viewCourse(firstCourse);
    
    cout<<"************************Oumaima's Report ************************************\n";
    oumaima->returnReport(assignment1,"done");
    oumaima->returnReport(assignment2,"done");
    oumaima->listMyReports();
 


    return 0;
}