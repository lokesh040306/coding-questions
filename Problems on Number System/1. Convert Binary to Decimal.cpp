/*

int binaryToDecimal(string s) {

    int n = s.length();
    
    // Base value for binary (2^0, 2^1, ...)
    int base = 1;
    
    // Result variable to store the decimal value
    int ans = 0;

    for (int i = n - 1; i >= 0; i--) {
    
        if (s[i] == '1') {
            ans += base;
        }
            
        base *= 2;
    }

    return ans;
}

int binaryToDecimal(string s) {

    // Use stoi to convert string to integer with base 2
    int num = stoi(s, 0, 2);

    return num;
}

*/