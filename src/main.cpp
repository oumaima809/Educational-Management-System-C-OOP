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
    Joe->listCourses();
    Joe->createAssignment("Exercice 2 page 16",firstCourse);
    Joe->createAssignment("Exercice 2,3,and 4 page 10",secondCourse);
    Joe->createAssignment("Exercice 4 page 5",firstCourse);
    Joe->viewAssignment(firstCourse);
    Joe->viewCourse(secondCourse);



    return 0;
}