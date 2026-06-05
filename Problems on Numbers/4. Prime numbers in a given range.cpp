/*

class Solution {
public:
    bool isPrime(int num) {
    
        if (num <= 1) return false;
        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0)
                return false;
        }
                
        return true;
    }

    vector<int> getPrimes(int a, int b) {

        vector<int> primes;

        for (int i = a; i <= b; i++) {
            // If i is prime, add to result
            if (isPrime(i))
                primes.push_back(i);
        }

        return primes;
    }
};

*/