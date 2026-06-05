/*

bool isHarshad(int num) {

    string s = to_string(num);
    int sum = 0;

    for (int i = 0; i < s.length(); i++) {
        sum += s[i] - '0';
    }

    if (num % sum == 0) {
        return true;
    }

    return false;
}

*/