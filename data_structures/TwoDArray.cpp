#include<iostream>
using namespace std;


int main(){

    int scores[][4]={
        10,11,12,13,
        14,15,16,17,
        18,19,20,21
    };


    for(int r=0;r<3;r++){
        for(int c=0;c<4;c++){
            cout << scores[r][c];
        }
    cout << " ";
    }
    


    
}