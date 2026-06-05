/*

class Solution {
public:
    int permutation(int n, int r) {
    
        int ans = 1;

        // ans = n! / (n - r)!
        // After simplifying the above, we get :
        
        for (int i = n; i >= n - r + 1; i--) {
            ans *= i;
        }

        return ans;
    }
};

*/