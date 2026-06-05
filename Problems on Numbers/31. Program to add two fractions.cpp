/*

class Solution {
public:
    int gcd(int a, int b) {

        while(a > 0 && b > 0) {

            // If a is greater than b, subtract b from a and update a
            if(a > b) {
                a = a % b;
            }
            // If b is greater than or equal to a, subtract a from b and update b
            else {
                b = b % a; 
            }
        }

        // Check if a becomes 0, return b as the GCD
        if(a == 0) {
            return b;
        }
            
        return a;
    }

    vector<int> addFractions(int num1, int den1, int num2, int den2) {
    
        int lcm = (den1 * den2) / gcd(den1, den2);

        // Convert both numerators to same denominator
        int newNum1 = num1 * (lcm / den1);
        int newNum2 = num2 * (lcm / den2);

        // Add the numerators
        int resultNum = newNum1 + newNum2;
        int resultDen = lcm;

        // Simplify the result by dividing by gcd
        int common = gcd(resultNum, resultDen);
        resultNum /= common;
        resultDen /= common;

        return {resultNum, resultDen};
    }
};

*/