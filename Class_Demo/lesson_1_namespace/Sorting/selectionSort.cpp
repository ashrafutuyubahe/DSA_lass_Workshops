#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {  
        int targetIndex = i;  
        
       
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[targetIndex]) {
                targetIndex = j; 
            } 
        }

      
        if (targetIndex != i) {
            swap(a[i], a[targetIndex]);
        }
    }
}

int main() {
    int a[] = {5, 3, 8, 6, 2};
    int n = sizeof(a) / sizeof(a[0]);

    selectionSort(a, n);

   
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
