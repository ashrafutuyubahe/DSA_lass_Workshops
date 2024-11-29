#include <iostream>
using namespace std;

int factorial(int i) {
    /* Base Case or Termination Condition */
    if (i <= 1) {
        return 1;
    }
    
    /* Body, Recursive Expansion */
    return i * factorial(i - 1);
}

int main() {
    cout << "Factorial: " << factorial(5) << std::endl;
    return 0;
}
