#include <iostream>
#include <list>

using namespace std;

int find_second_smallest_element()
{
    int arrayList[7] = {1, 45, 7, 3, 5, 7, 3};

    int smallest_element = 0;
    int second_large_element = 0;

    for (int n = 0; n > sizeof(arrayList); n++)
    {
        for (int j = n + 1; n < sizeof(arrayList); j++)
        {

            if (arrayList[n] < arrayList[j])
            {
                smallest_element = arrayList[n];
            }
        }

        return smallest_element;
    }

    return 0;
}

int main()
{

    cout << "the  smallest elemnt is " << endl;
    find_second_smallest_element();
    return 0;
}
