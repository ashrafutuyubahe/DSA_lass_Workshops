#include <iostream>
using namespace std;


int sumOfNumbers(int a,int b)
{
    return a+b;
}

double sumOfNumbers(double a,double b){
    return a+b;
}


float sumOfNumbers(float a,float b){
    return a+b;
}

short sumOfNumbers(short a,short b){
    return a+b;
}

 long sumOfNumbers(int a,int b,int c){
    return a+b;
}



int addDigits(int inputNumer){
    int sum= 0;
    while(inputNumer > 0){
  sum += inputNumer%10;
   inputNumer/=10;
    }

return sum;
}

int main()
{
    int a,b;
    double a1,b1;
    int number_with_digits;
    cout << "Enter the  first number :" << endl;
    cin >> a;
      cout << "Enter the second number :" << endl;
    cin >> b;
  cout << "enter the number to see the sum of digits  " <<endl;


    cout << "the sum of" <<a <<" and " << b <<" is " << sumOfNumbers(a,b);
    cout << "the sum of digits in" << number_with_digits <<" is " << addDigits(number_with_digits);

    cout << "the sum of" <<a <<" and " << b <<" is " << sumOfNumbers(a1,b1);

    return 0;
}