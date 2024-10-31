#include <iostream>
using namespace std;
// template <typename T>
template <typename S,typename b>


  auto addition(S a, b d)->decltype(a+d){
    return a+d;
}

int main()
{

cout << "the addition of 2 numbers is " << addition(20,2.456) <<endl;
// cout << "the string you've provided is " << showString <string> ("john") <<endl;
    return 0;
}