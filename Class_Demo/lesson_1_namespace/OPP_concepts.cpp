#included<iostream>
using namespace std;


int  main (){

char studentName[20];
char studentClass;
int studentAge;
cout << "+++++++++++++++++++++++++++++ Here is  student management system +++++++++++++++++++++++"<< endl;

cout << "Einter the student name" <<endl;
getLine(cin,studentName);

cout << "Einter the student name" <<endl;
getLine(cin,studentName);

cout << "Einter the student name" <<endl;
cin >> ;




    return 0;
}


class Student{

  private:

   char  studName[20]="Aisha";
  int studAge=20;
  char studClass='a';

  public:

 Student(char studName,int studAge,char studClass){};

   Student(char studName,int studAge,char studClass)
  {
     studAge=studName;
     studAge=studAge;
     studClass=studClass;

  } 
   
   void getStudName(){
    return studName;
   }

   void getStudClass(){
    return studClass;
   }

 void getStudAge(){
    return StudAge;
   }

 void setStudName(char newStudName){
     studName=newStudName;
   }

 void setStudAge(int newStudAge){
     studAge=newStudAge;
   }

 void setStudClass(char newStudClass){
     studClass=newStudClass;
   }

 
 
   
}