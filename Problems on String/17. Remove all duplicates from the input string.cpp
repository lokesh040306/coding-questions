/*

class Solution {
public:
    string removeDuplicates(string s) {
    
        bool seen[26] = {false};
        string result = "";

        for (char ch : s) {

            // If character is not seen before
            if (!seen[ch - 'a']) {
                seen[ch - 'a'] = true;
                result += ch;
            }
        }
            
        return result;
    }
};

*/