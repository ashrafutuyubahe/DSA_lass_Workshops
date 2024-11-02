#include<iostream>
using namespace std;
int main()
{

    int numbers[]={1,2,3,4,5};

    // if(isSorted(a,5)){
    //     cout << "Sorted "<< endl;

    // } else{
    //     cout <<"No sorted" <<endl;

    // }

    for(int i=0;i<5;i++){
        // cout << numbers[i] <<endl;
        cout << *(numbers +i) <<endl;
    }



}
