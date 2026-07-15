/*

string capitalizeFirstAndLast(string str) {

    int n = str.length();

    for (int i = 0; i < n; i++) {

        // First character of a word
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }

        // Last character of a word
        if (i == n - 1 || str[i + 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    return str;
}

*/