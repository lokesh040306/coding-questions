/*

// int main() {

//     int n = 5;

//     if (n == 0) {
//         cout << 0;
//     }
//     else {
//         int secondLast = 0; // (i-2)th term
//         int last = 1;       // (i-1)th term

//         for (int i = 2; i <= n; i++) {
//             cur = last + secondLast;   
//             secondLast = last;         
//             last = cur;
//             cout << cur << " ";
//         }
//     }

//     return 0;
// }

int fibonacci(int N) {

    // Base case: if N is 0 or 1, return N itself
    if (N <= 1) {
        return N;
    }

    int last = fibonacci(N - 1);   
    int slast = fibonacci(N - 2);  

    return last + slast;
}

*/