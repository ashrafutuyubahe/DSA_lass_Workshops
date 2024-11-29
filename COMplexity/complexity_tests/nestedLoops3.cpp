#include <iostream>
using namespace std;

int fun3(int n) {
    int i, j, k, m = 0; 
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                m += 1;
            }
        }
    }
    return m;
}

// Testing Code
int main() {
    
    cout << "N = 100" << ", Number of instructions O(n^3) :: " << fun3(180) << endl;
    return 0;
}
