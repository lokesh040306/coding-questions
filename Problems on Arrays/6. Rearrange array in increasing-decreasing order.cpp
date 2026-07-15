/*

class Solution {
public:
    void rearrangeArray(vector<int>& arr) {
    
        // Sort the entire array
        sort(arr.begin(), arr.end());

        int n = arr.size();
        // Reverse the second half
        reverse(arr.begin() + n / 2, arr.end());
    }
};

*/