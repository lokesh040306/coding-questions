/*

void rotateclockwise(vector<int>& arr, int k){
    int n = arr.size();
    if (n == 0) return;

    k = k % n;
    int i, j;

    // reverse last k elements
    i = n - k, j = n - 1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    // reverse first n - k elements
    i = 0, j = n - k - 1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--
    }

    // reverse the entire array
    i = 0, j =  n - 1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--
    }
}

*/