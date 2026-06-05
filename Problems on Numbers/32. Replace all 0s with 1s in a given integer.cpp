/*

class Solution {
public:
    int replaceZerosWithOnes(int N) {
    
        if (N == 0) return 1;

        int reversed = 0;

        while (N > 0) {

            int digit = N % 10;

            // If digit is 0, convert it to 1
            if (digit == 0) digit = 1;

            reversed = reversed * 10 + digit;

            N /= 10;
        }

        int result = 0;

        // Reverse the number again to restore original order
        while (reversed > 0) {
            result = result * 10 + (reversed % 10);
            reversed /= 10;
        }

        return result;
    }
};

*/