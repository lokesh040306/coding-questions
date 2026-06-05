/*

int calculateSum(int l, int r) {

    // formulas are made from the 
    // sum of 'n' numbers - n * (n - 1) / 2

    // Formula: sum(1 to r) - sum(1 to l-1)
    return (r * (r + 1)) / 2 - ((l - 1) * l) / 2;
}

*/