/*

bool isAutomorphic(int N) {

    int sq = N * N;  

    while (N > 0) {

        // Check if last digit of N is equal to the last digit of its square
        if (N % 10 != sq % 10) {
            return false; 
        }

        // Reduce the number and its square
        N /= 10;
        sq /= 10;
    }

    return true;  
}

*/