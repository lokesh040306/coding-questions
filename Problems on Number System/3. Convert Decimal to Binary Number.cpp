/*

string decimalToBinary(int n) {

    string ans = "";

    // Convert decimal number to binary using division by 2
    while (n) {
        ans.push_back(n % 2);  // Store the remainder (either 0 or 1)
        n /= 2;             
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

*/