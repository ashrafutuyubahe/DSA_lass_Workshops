#include <iostream>
#include <cctype>
using namespace std;

int printMultipleOf10(int n)
{

    if ((n % 10) != 0)
    {

        cout << n << endl;
    }
        
  return n;
  n -=10;
  printMultipleOf10(n);


}

int main()
{

  int first=60;
    cout << printMultipleOf10(first);
    return 0;
}