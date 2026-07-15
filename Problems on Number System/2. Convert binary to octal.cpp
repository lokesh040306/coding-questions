/*

string binaryToOctal(string s) {

    int n = s.length();

    // Pad leading zeros to make length a multiple of 3
    if (n % 3 == 1) {
        s = "00" + s;
    } 
    else if (n % 3 == 2) {
        s = "0" + s;
    }

    // Update length after padding
    n = s.length();
    string ans = "";

    // Process every group of 3 bits
    for (int i = 0; i < n; i += 3) {
        int temp = (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0') * 1;
        ans += (temp + '0'); // Convert number to char
    }

    return ans;
}

*/