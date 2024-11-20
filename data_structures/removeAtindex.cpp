#include<iostream>
using namespace std;


int main(){                                                                                                 

    int scores[]={52,78,75,68,88,63,75,90,78};
    int item=10;

    int k=3; 
    int len=9;
    int j=len-1;

    while(j>=k){
        scores[j+1]= scores[j];  //I have  to implement the logic  to delete the lemet at index
        j=j-1;
        scores[k]=item;

    }

    for(int index=0;index<len+1;index++){
        cout << scores[index] <<endl;
         
    }


    
}