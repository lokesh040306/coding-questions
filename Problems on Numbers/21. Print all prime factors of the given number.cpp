/*

class Solution {
public:
    bool checkPrime(int n){ 
    
        int cnt = 0;

        for(int i = 1; i <= sqrt(n); i++){ 
        
            if(n % i == 0) { 
            
                cnt = cnt + 1;

                // If n is not a perfect square, count its reciprocal factor.
                if(n / i != i){
                    cnt = cnt + 1;
                }
            }
        }

        if(cnt == 2) {
            return true;
        }
        else { 
            return false; 
        }
    }

    vector<int> getPrimeFactors(int n){ 

        vector<int> primeFactors; 
        
        for(int i = 2; i <= n; i++) { 
            if(n % i == 0) { 
                if(checkPrime(i)) { 
                    primeFactors.push_back(i); 
                }
            }
        }
            
        return primeFactors; 
    }
};

*/