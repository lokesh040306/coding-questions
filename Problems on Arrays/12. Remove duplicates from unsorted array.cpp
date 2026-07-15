/*

class Solution {
public:
    vector<int> removeDuplicates(vector<int>& arr) {

        unordered_map<int, bool> seen;
        vector<int> result;

        for (int val : arr) {
            // If not seen before, add to result and mark as seen
            if (!seen[val]) {
                result.push_back(val);
                seen[val] = true;
            }
        }

        return result;
    }
};

*/