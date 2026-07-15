/*

class Solution {
    bool isAllStars(string &pattern, int index2) {
        for(int i = 0; i <= index2; i++) {
            if(pattern[i] != '*') {
                return false;
            }
        }
        return true;
    }

    bool isPossible(string &text, int index1, string &pattern, int index2) {

        // Base case
        if(index1 < 0 && index2 < 0) {
            return true;
        }

        if(index2 < 0 && index1 >= 0) {
            return false;
        }

        if(index1 < 0 && index2 >= 0) {
            return isAllStars(pattern, index2);
        }

        // case 1 :
        if(text[index1] == pattern[index2]) {
            return isPossible(text, index1 - 1, pattern, index2 - 1);
        }

        // case 2:
        if(pattern[index2] == '?') {
            return isPossible(text, index1 - 1, pattern, index2 - 1);
        }

        // case 3:
        if(pattern[index2] == '*') {
            return isPossible(text, index1 - 1, pattern, index2) 
                            || isPossible(text, index1, pattern, index2 - 1);
        }

        return false;
    }
    
    bool isPossibleMem(string &text, int index1, string &pattern, int index2, vector<vector<int>> &dp) {

        // Base case
        if(index1 < 0 && index2 < 0) {
            return true;
        }

        if(index2 < 0 && index1 >= 0) {
            return false;
        }

        if(index1 < 0 && index2 >= 0) {
            return isAllStars(pattern, index2);
        }

        if(dp[index1][index2] != -1) {
            return dp[index1][index2];
        }

        // case 1 :
        if(text[index1] == pattern[index2]) {
            return dp[index1][index2] = isPossibleMem(text, index1 - 1, pattern, index2 - 1, dp);
        }

        // case 2:
        if(pattern[index2] == '?') {
            return dp[index1][index2] = isPossibleMem(text, index1 - 1, pattern, index2 - 1, dp);
        }

        // case 3:
        if(pattern[index2] == '*') {
            return dp[index1][index2] = isPossibleMem(text, index1 - 1, pattern, index2, dp) 
                            || isPossibleMem(text, index1, pattern, index2 - 1, dp);
        }

        return dp[index1][index2] = false;
    }

public:
    bool isMatch(string s, string p) {
        
        // Recursion
        // int len1 = s.length();
        // int len2 = p.length();
        // return isPossible(s, len1 - 1, p, len2 - 1);
        
        // Recursion + Memoization
        int len1 = s.length();
        int len2 = p.length();
        vector<vector<int>> dp(len1, vector<int> (len2, -1));
        return isPossibleMem(s, len1 - 1, p, len2 - 1, dp);
    }
};

*/