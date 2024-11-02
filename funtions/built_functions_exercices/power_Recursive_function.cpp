#include<iostream>
#include<cctype>
using namespace std;

int computePower(int x,int n){
    if(n==0){
        return n;
    }

   int smallNumber=  computePower(x,n-1);

   return x* computePower(x,n-1);;
}

int main(){

    cout <<  computePower(2,2) << endl;

}