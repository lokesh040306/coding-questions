/*

bool bSearch(int elem, int arr[], int n) {
    int start = 0;
    int end = n - 1;

    // Perform binary search
    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == elem)
            return true;
        else if (arr[mid] < elem)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return false; 
}

bool isSubset(int arr1[], int m, int arr2[], int n) {

    sort(arr2, arr2 + n);

    if (m > n) return false;

    for (int i = 0; i < m; i++) {
        bool present = bSearch(arr1[i], arr2, n); 

        if (present == false) return false;
    }

    return true;
}

*/