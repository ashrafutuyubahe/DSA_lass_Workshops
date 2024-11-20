#include<iostream>

using namespace std;

int main(){

    int count=0;
 
 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        count+=1;
        cout << "count = "<<count << " i=" << i << "j= " << j << endl;
    }
 }



    return 0;
}