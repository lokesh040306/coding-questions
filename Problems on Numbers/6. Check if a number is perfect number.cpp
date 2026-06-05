/*

bool isPerfect(int n) {
    
    int sum = 0;

    for (int i = 1; i <= n - 1; i++) {
        // If i is a divisor of n
        if (n % i == 0)
            sum = sum + i;  
    }

    // If the sum of divisors is equal to n, it is a perfect number
    if (sum == n)
        return true;
    else
        return false; 
}

*/