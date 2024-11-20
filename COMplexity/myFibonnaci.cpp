#include<iostream>

using namespace std;

int printfactorial(int n){
//base case
    if(n==0){
        return 0;
    }

   
     
     //recursive stage
     return printfactorial(n-1) + printfactorial(n-2);
}
 int main(){

printfactorial(1);
    return 0;
 }