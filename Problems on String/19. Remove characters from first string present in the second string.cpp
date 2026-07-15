/*

class Solution {
public:
    string removeChars(string str1, string str2) {
    
        unordered_map<char, bool> removeMap;

        string result = "";

        for (char ch : str2) {
            removeMap[ch] = true;
        }

        for (char ch : str1) {
            if (!removeMap[ch]) {
                result += ch;
            }
        }

        return result;
    }
};

*/