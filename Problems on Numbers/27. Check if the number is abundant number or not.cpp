/*

bool isAbundant() {

    int sum = 0;

    for (int i = 1; i <= sqrt(n); i++) {
    
        if (n % i == 0) {

            if (n / i == i) {
                sum += i;
            }
            else {
                sum += i;
                sum += n / i;
            } 
        }
    }

    // Subtract the number itself from the sum of divisors
    sum -= n;

    if (sum > n) {
        return true;
    }

    return false;
}

*/