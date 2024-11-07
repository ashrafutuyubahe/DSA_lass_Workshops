#include <iostream>
#include <list>

using namespace std;

void calculate_count(int n)
{

    int numberAray[10] = {1, 3, 5, 6, 4, 6, 4, 3, 3, 6};
    int nummber_count = 0;

    for (int number : numberAray)
    {
        if (number == n)
        {
            nummber_count += 1;
        }
    }
    cout << "the number of frequency of " << n << " is: " << nummber_count << endl;

     
}

int main()
{

    calculate_count(0);
    return 0;
}