/*

class Solution {
public:
    vector<int> findDivisors(int n) {
    
        vector<int> divisors;

        for (int i = 1; i * i <= n; i++) {
        
            if (n % i == 0) {
            
                divisors.push_back(i);

                // Add the paired divisor if different
                if (i != n / i) {
                    divisors.push_back(n / i);
                }
            }
        }

        return divisors;
    }
};

*/