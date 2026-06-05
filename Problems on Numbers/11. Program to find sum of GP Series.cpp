/*

// class Solution {
// public:
//     double gpSum(double a, double r, int n) {
    
//         double sum = 0;
        
//         double term = a;

//         for (int i = 0; i < n; i++) {
        
//             sum += term;

//             // Multiply term by ratio to get next term
//             term *= r;
//         }

//         return sum;
//     }
// };

class Solution {
public:
    double sumOfGP(double a, double r, int n) {
    
        if (r == 1)
            return a * n;
        
        // Apply GP formula for r != 1
        return a * (pow(r, n) - 1) / (r - 1);
    }
};

*/