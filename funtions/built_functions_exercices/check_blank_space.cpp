#include <iostream>
#include <cctype>
using namespace std;

int main()
{

    string input;
    bool isWordSrting = false;
    bool contain_space = false;

    cout << "Enter the input to check if it's string" << endl;
    cin >> input;

    for (char eachChar : input)
    {
        if (isblank(eachChar))
        {
            contain_space = true;
        }
    }

    if (contain_space)
    {
        cout << "contai blank space " << endl;
    }
    else
    {
        cout << "does not contain blank space" << endl;
    }
}