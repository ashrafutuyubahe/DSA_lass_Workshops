#include <iostream>

int fun2(int n)
{
    int i, j, k, m = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                m += 1;
            }
        }
    }
    return m;
}

// Testing Code
int main()
{
    int n = 100;
    std::cout << "N = " << n << ", Number of instructions in O(n^3): " << fun2(n) << std::endl;
    return 0;
}
