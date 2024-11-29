#include<iostream>
using namespace std;

int main() {
    int n = 3;  
    int arrayNumbers[3] = {20, 56, 4};  

   
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {  
            if(arrayNumbers[j] > arrayNumbers[j+1]) {
               
                int temp = arrayNumbers[j];
                arrayNumbers[j] = arrayNumbers[j+1];
                arrayNumbers[j+1] = temp;  // here therre is worse case of O(N power 2)

                // intrduce bool check  to see if the in one iteration there might me a swap heppedd to achieve the best case of O(N)
            }
        }  
    }

  
    for(int num : arrayNumbers) {
        cout << num << endl;
    }

    return 0;
}
