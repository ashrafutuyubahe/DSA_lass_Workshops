#include <iostream>
#include <list>

using namespace std;

int find_second_largest_element(){
int arrayList[7]={1,45,7,3,5,7,3};

int large_element=0;
int second_large_element=0;

// for(int large_number: arrayList){
//     if(large_element>)
// }
  for(int n=0;n>sizeof(arrayList);n++){
     if(arrayList[n]>arrayList[n+1]){
        large_element= arrayList[n];

     }
     return large_element;

  }


cout << "the  smallest elemt is "<< endl;

find_second_largest_element();     
    return 0;
}

int main()
{

    find_second_largest_element();
    return 0;
}
