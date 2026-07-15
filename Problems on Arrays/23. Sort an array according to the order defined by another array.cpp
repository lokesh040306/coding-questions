/*

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        // Hashing

        unordered_map<int, int> freq;

        // Count frequency
        for(int num : arr1) {
            freq[num]++;
        }

        vector<int> ans;

        // Put elements according to arr2 order
        for(int num : arr2) {

            while(freq[num] > 0) {
                ans.push_back(num);
                freq[num]--;
            }

            freq.erase(num);
        }

        // Store remaining elements
        vector<int> remaining;

        for(auto it : freq) {

            int num = it.first;
            int count = it.second;

            while(count--) {
                remaining.push_back(num);
            }
        }

        // Sort remaining elements
        sort(remaining.begin(), remaining.end());

        // Append to answer
        for(int num : remaining) {
            ans.push_back(num);
        }

        return ans;
    }
};

*/