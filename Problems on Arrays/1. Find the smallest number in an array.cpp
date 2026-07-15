#include <bits/stdc++.h>
using namespace std;

int SmallestElement(int arr[], int n) {
    int mini = arr[0];  

    // Iterate through the array to find the smallest element
    for (int i = 1; i < n; i++) {
        if (mini > arr[i]) {  
            mini = arr[i];
        }
    }

    return mini; 
}

int main() {
    
    int arr1[] = {2, 5, 1, 3, 0};  
    int n = 5; 

    
    int mini = SmallestElement(arr1, n);
    cout << "The smallest element in the array is: " << mini << endl;

    return 0;
}