#include <iostream>
#include "Doctor.h"
#include "Student.h"
#include "Course.h"
#include "Assignment.h"


using namespace std;

int main(){

    Doctor* Joe =new  Doctor("doc124","Joe","Dao","dao@gmail.com","helloworld");
    Joe->createCourse("cs01","data structure") ;
    Joe->listCourses();

    return 0;
}