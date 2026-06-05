/*

int findGcd(int a, int b) {

    while(a > 0 && b > 0) {

        // If a is greater than b, subtract b from a and update a
        if(a > b) {
            a = a % b;
        }
        // If b is greater than or equal to a, subtract a from b and update b
        else {
            b = b % a; 
        }
    }

    // Check if a becomes 0, return b as the GCD
    if(a == 0) {
        return b;
    }
        
    return a;
}

*/