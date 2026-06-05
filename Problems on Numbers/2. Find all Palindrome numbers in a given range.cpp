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

vector<int> findAllPalindrome(int maxi, int mini) {

    vector<int> ans;
    
    for(int i = mini; i <= maxi; i++) {
        if(isPalindrome(i)) {
            ans.push_back(i);
        }
    }
    
    return ans;
}

*/