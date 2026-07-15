/*

class Solution {
public:
    string decimalToOctal(int decimal) {
    
        if (decimal == 0) {
            return "0";
        }

        string octal = "";
        int n = decimal;

        // Repeatedly divide the number by 8 and store the remainder
        while (n > 0) {

            // Get the remainder when divided by 8
            int remainder = n % 8;

            octal.push_back(remainder);

            n = n / 8;
        }

        reverse(octal.begin(), octal.end());
        
        return octal;
    }
};

*/