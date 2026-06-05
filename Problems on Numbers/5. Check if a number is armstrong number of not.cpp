/*

bool isArmstrong(int num) {

    // Find the number of digits
    int k = to_string(num).length();

    int sum = 0;
    int n = num;

    while(n > 0) {
        int rem = n % 10;
        sum += pow(rem, k);
        n = n / 10;
    }

    return sum == num;
}

*/