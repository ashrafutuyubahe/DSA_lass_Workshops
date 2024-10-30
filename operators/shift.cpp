#include <iostream>
using namespace std;
#define  PI 3.14;
const double PI2= 3.24;

int main()
{

    int k = 75;

    int b = k >> 1; // same as k/2
    int c = k << 2; // same as k*2

    cout << PI2 <<endl;
    cout <<PI   
    cout << "the value of  b is " << b << " and the value of c is " << c << endl;

    return 0;
}