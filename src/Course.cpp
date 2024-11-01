#include "bits.h"
#include <string>
#include "Course.h"

using namespace std;


Course::Course(string code,string name,string teacher):
  _code(code),_name(name),_teacher(teacher){}
Course::Course(){}
Course::~Course(){}
string Course::getName(){
  return _name;
}
string Course::getCode(){
  return _code;
}
string Course::getTeacher(){
  return _teacher;
}
