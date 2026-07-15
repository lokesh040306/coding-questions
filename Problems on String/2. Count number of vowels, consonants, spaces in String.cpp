/*

vector<int> solve(string str, int length) {

    int vowels = 0, consonants = 0, whitespaces = 0;

    // Convert the string to lowercase
    for (int i = 0; i < length; i++) {
        str[i] = towlower(str[i]);
    }

    for (int i = 0; i < length; i++) {
    
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z'){
            consonants++;
        }
        else if (str[i] == ' ') {
            whitespaces++;
        }
    }

    return {vowels, consonants, whitespaces};
}

*/