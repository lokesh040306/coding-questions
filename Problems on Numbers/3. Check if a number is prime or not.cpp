/*

bool checkPrime(int n) {

    int cnt = 0;  

    // Loop through numbers from 1 to n.
    for (int i = 1; i <= n; i++) {

        // If n is divisible by i without any remainder.
        if (n % i == 0) {
            cnt++;  
        }
    }

    // If the number of factors is exactly 2 (1 and the number itself), it's prime.
    if (cnt == 2) {
        return true;
    }
    else {
        return false;
    }
}

*/