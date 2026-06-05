/*

class Solution {
public:
    void Roots(int a, int b, int c) {
    
        // Calculate discriminant
        int d = b * b - 4 * a * c;

        // Calculate square root of absolute discriminant
        double sqrt_val = sqrt(abs(d));

        // Case when roots are real and different
        if (d > 0) {
            cout << "Roots are real and different \n";
            double root1 = (-b + sqrt_val) / (2 * a);
            double root2 = (-b - sqrt_val) / (2 * a);
            cout << root1 << "\n" << root2;
        }

        // Case when roots are real and same
        else if (d == 0) {
            cout << "Roots are real and same \n";
            double root1 = -(double)b / (2 * a);
            cout << root1 << "\n" << root1;
        }

        // Case when roots are complex
        else {
            cout << "Roots are complex \n";
            cout << -(double)b / (2 * a) << " + i" << sqrt_val << "\n";
            cout << -(double)b / (2 * a) << " - i" << sqrt_val;
        }
    }
};

*/