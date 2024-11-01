#include "bits.h"
#include <string>
#include "Course.h"
#include <vector>

using namespace std;


class Doctor {

    private: 
        string _userName;
        string _firstName;
        string _lastName;
        string _email;
        string _password;
        vector<Course*>myCourses;

    public:
        Doctor();
        Doctor(string userName ,string firstName ,string lastName , string email ,string password);
        ~Doctor();
        Course* createCourse(string code,string name);
        void listCourses();
        void viewCourse(Course*);
        //void addTA();
        void createAssignment(string assignmentQ, Course* course);
        void viewAssignment(Course* course);
        //void setGrade();

    

    
    





};
