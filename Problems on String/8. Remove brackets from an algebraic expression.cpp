/*

class Solution {
public:
    string removeBrackets(string expr) {
    
        string result = "";

        for (char ch : expr) {
        
            if (ch != '(' && ch != ')') {
                result += ch;
            }
        }

        return result;
    }
};

*/