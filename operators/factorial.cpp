#include<iostream>
using namespace std;

int sumDigits(int x){
    if(x>10){
        return x;
    }

    int smallNUmber= sumDigits(x-1);
    return x%10 + smallNUmber;
}

int main(){

cout << "the sum of digits is " << sumDigits(23);

return 0;

}
