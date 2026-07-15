/*

string maxLengthWords(string str) {

    int n = str.length();
    int i = 0, j = 0;

    int maxLen = 0, startIdx = 0;

    while(j <= n) {

        if(j < n && str[j] != ' ') {
            j++;
        }
        else {
            int currLen = j - i;

            if(currLen > maxLen) {
                maxLen = currLen;
                startIdx = i;
            }

            j++;
            i = j;
        }
    }

    return str.substr(startIdx, maxLen);
}

*/