#include<iostream>
#include<cctype>
using namespace std;

int main(){

    string input;
    bool isWordSrting=false;

    cout <<"Enter the input to check if it's string" << endl;
    cin >> input;
    

    for(char charInWord:input){
        if(isalpha(charInWord)){
          isWordSrting=true;
          break;
        }
    }

    if(isWordSrting){
          cout << "the input is   contains letter" <<endl;
    }else{
        cout <<" the input  does not contain  letter"  << endl; 
    }
}