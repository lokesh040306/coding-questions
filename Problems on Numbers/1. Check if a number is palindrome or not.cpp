/*

bool isPalindrome(int n) {

    int num = n;

    // Store the reverse number
    int temp = 0;

    // Reverse the number
    while(n > 0) {
        int rem = n % 10;
        temp = temp * 10 + rem;
        n = n / 10;
    }

    return temp == num;
}

*/