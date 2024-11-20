#include <iostream>
using namespace std;

void display(int mark[][5], int r, int c)
{

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << mark[i][j] << "";
        }

        cout << endl;
    }
}

int main()
{

    int A[][5] = {
        {12, 13},
        {14, 15}};

    display(A, 2, 5);
    int B = {{0}};

    
    return 0;
}