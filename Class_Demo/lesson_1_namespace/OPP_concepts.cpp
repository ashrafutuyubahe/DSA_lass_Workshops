#include <iostream>
#include <string.h>

using namespace std;


//Encapsulation principle
class Student
{

private:
    string studName;
    int studAge;
    char studClass;

public:
    Student() {};

    Student(string studName, int studAge, char studClass)
    {
        studName = studName;
        studAge = studAge;
        studClass = studClass;
    }

    void StudentBehavior(){
        cout << "he/she is good student"<< endl;
    }

    string getStudName()
    {
        return studName;
    }

    char getStudClass()
    {
        return studClass;
    }

    int getStudAge()
    {
        return studAge;
    }

    void setStudName(string newStudName)
    {
        studName = newStudName;
    }

    void setStudAge(int newStudAge)
    {
        studAge = newStudAge;
    }

    void setStudClass(char newStudClass)
    {
        studClass = newStudClass;
    }
};


//Inheritance and POlymorhism
class Student_Kalim:  Student{

private:
    string studName;
    int studAge;
    char studClass;
    int studentMarks;

// polymorphism (overring the methods)
public:
  void StudentBehavior(){
    cout << "the student is introvert and humble" <<endl;
    cout << "do you agree? " << endl;
  }
 
};


int main()
{

    string studentName;
    char studentClass;
    int studentAge;
    cout << "+++++++++++++++++++++++++++++ Here is  student management system +++++++++++++++++++++++" << endl;

    cout << "Einter the student name" << endl;
    getline(cin, studentName);

    cout << "Enter the student class(a,b or c)" << endl;
    cin >> studentClass;

    cout << "Enter the student age" << endl;
    cin >> studentAge;

    Student studentInstance;

    studentInstance.setStudClass(studentClass);
    studentInstance.setStudAge(studentAge);
    studentInstance.setStudName(studentName);

    cout << "Here is the current status of the record in database" << "student name " << studentInstance.getStudName() << ", student age " << studentInstance.getStudAge()<< "and  the student class is " << studentInstance.getStudClass() <<endl;; 
    studentInstance.StudentBehavior();
    


    return 0;
}
