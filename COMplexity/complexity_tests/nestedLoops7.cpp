#include <iostream>
using namespace std;

int fun7(int n)
{
    int i, j, k, m = 0;

    // First set of nested loops
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            m += 1;
        }
    }

    // Second set of nested loops
    for (i = 0; i < n; i++)
    {
        for (k = 0; k < n; k++)
        {
            m += 1;
        }
    }

    return m;
}

// Testing Code
int main()
{
    int n = 100;
    cout << "N = " << n << ", Number of instructions O(n^2):: " << fun7(n) << endl;
    return 0;
}
