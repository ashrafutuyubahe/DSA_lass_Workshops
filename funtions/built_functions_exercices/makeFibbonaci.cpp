#include<iostream>

using namespace  std;





int fib(int n){

    //base
    if(n==0){
        return 0;
    }
    //base case
    if(n==1){
        return 1;
    }

    //hypothosis stage

    // recursinve stage and calcualtion
    cin.ignore();
 
    return  fib(n-1) + fib(n-2);   
    
}
int main(){

    cout << "here is the series " <<fib(2) <<endl;
    
}


