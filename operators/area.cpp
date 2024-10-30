#include <iostream>
using namespace std;
#define PI 3.14;
const double PI2 = 3.24;

double computerAArea(double radius)
{
    return radius * PI;
}

int main()
{
    double radius;

    cout << "Enter the radius :" << endl;
    cin >> radius;

    cout << "the area is " << computerAArea(radius);

    return 0;
}