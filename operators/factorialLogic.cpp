#include <iostream>
using namespace std;

int sumDigits(int x) {
    if (x == 0) {
        return 0;
    }

    int smallNumber = sumDigits(x / 10);
    return x % 10 + smallNumber;
}

int main() {
    cout << "The sum of digits is " << sumDigits(23);
    return 0;
}
