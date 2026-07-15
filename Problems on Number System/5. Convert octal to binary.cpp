/*

class Solution {
public:
    int OctalToDecimal(int Octal) {

        int Decimal = 0;
        int i = 0;

        while (Octal != 0) {
            int rem = Octal % 10;
            Decimal += rem * pow(8, i);
            i++;
            Octal /= 10;
        }

        return Decimal;
    }

    int DecimalToBinary(int decimal) {

        int Binary = 0;
        int i = 0;

        while (decimal != 0) {
            int rem = decimal % 2;
            Binary += (rem * pow(10, i));
            i++;
            decimal /= 2;
        }
            
        return Binary;
    }
};

*/