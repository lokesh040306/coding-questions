/*

class Solution {
public:
    int sumOfNumbers(string s) {
    
        int sum = 0;
        
        string temp = "";
        
        for (char ch : s) {

            // If character is a digit
            if (isdigit(c)) {
                temp += c;
            } 
            else {
                if (!temp.empty()) {
                    sum += stoi(temp);
                    temp = "";
                }
            }
        }
        
        // Add last number if string ends with digits
        if (!temp.empty()) {
            sum += stoi(temp);
        }
        
        return sum;
    }
};

*/