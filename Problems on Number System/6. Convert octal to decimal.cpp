/*

class Solution {
public:
    int OctalToDecimal(int Octal) {
    
        int Decimal = 0;
        
        int i = 0;
        
        while (Octal != 0) {
        
            int rem = Octal % 10;

            // Add to decimal result after multiplying by 8^i
            Decimal += rem * pow(8, i);
            
            i++;
            
            Octal /= 10;
        }
            
        return Decimal;
    }
};

*/