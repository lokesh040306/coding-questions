/*

class Solution {
public:
    vector<int> findMaxMinDigit(int n) {
    
        int maxDigit = 0;
        int minDigit = 9;

        while (n > 0) {
            // Extract last digit
            int digit = n % 10;

            // Update max digit
            if (digit > maxDigit) maxDigit = digit;

            // Update min digit
            if (digit < minDigit) minDigit = digit;

            // Remove last digit
            n = n / 10;
        }

        return {maxDigit, minDigit};
    }
};

*/