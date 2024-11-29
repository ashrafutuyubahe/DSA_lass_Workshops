#include<iostream>
using namespace std;

int main() {
    int n = 3;  
    int arrayNumbers[3] = {20, 56, 4};  

     int j;
    for(int i =1; i < n; i++) {
         int key= arrayNumbers[i];
            i= i-1;
            while(j>=0 && arrayNumbers[j]> key){
                      arrayNumbers[j+1]= arrayNumbers[j];
                      j--;
            }

            arrayNumbers[j+1]= key;
    }
    

  
    for(int num : arrayNumbers) {
        cout << num << endl;
    }

    return 0;
}
