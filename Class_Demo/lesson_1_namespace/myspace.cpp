#include<iostream>
#include<string.>
 using namespace std;

namespace userDefined{
    int namespaceVariable=12;

  int cout(){
   return namespaceVariable;
  }
}

int myGlobal=10;

int cout(){
    return myGlobal*myGlobal;
}

int main(){

int cout=2;

std::cout << "The local variable in main is " << cout << endl;
std::cout << "The variable in userDefined namespace is " << userDefined::namespaceVariable << endl;
std::cout << "The output of cout() in userDefined is " << userDefined::cout() << endl;  
std::cout << "The value of myGlobal is " << myGlobal << endl;
std::cout << "The output of global cout() is " << ::cout() << endl;  
int number=181;
// st::cout << hex << number <<endl;



return 0;
}