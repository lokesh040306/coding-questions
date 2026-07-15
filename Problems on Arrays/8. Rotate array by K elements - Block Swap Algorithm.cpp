/*

class Solution {
public:

    // Left Rotate by k
    void leftRotate(vector<int>& arr, int k) {

        int n = arr.size();

        k = k % n;

        reverse(arr.begin(), arr.begin() + k);

        reverse(arr.begin() + k, arr.end());

        reverse(arr.begin(), arr.end());
    }

    // Right Rotate by k
    void rightRotate(vector<int>& arr, int k) {

        int n = arr.size();

        k = k % n;

        reverse(arr.begin(), arr.end());

        reverse(arr.begin(), arr.begin() + k);

        reverse(arr.begin() + k, arr.end());
    }
};

*/