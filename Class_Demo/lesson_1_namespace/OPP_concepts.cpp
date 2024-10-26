#include <iostream>
#include <string.h>

using namespace std;

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

    cout << "Here is the current status of the record in database" << "student name " << studentInstance.getStudName();

    return 0;
}
