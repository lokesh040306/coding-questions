/*

int Factorial(int n) {

    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int Strong_No(int num) {

    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum = sum + Factorial(digit);
        num = num / 10;
    }

    return sum;
}
 
*/