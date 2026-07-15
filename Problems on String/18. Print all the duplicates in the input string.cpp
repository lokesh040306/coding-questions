/*

class Solution {
public:
    vector<char> printDuplicates(string str) {

        vector<int> freq(26, 0);

        vector<char> ans;

        for (int i = 0; i < str.length(); i++) {
            freq[str[i] - 'a']++;
        }

        // Print characters that appear more than once
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 1) {
                char ch = char(i + 'a');
                ans.push_back(ch);
            }
        }

        return ans;
    }
};

*/