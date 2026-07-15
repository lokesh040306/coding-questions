/* 

string solve(string str) {

    int n = str.length();

    for(int i = 0; i < n; i++) {

        int ascii = (int)(str[i]);

        if(ascii == 90) {
            str[i] = char(65);  // if 'Z', wrap 'A'
        }
        else if(ascii == 122) {
            str[i] = char(97);  // If 'z', wrap 'a'
        }
        else if((ascii >= 65 && ascii < 90) || (ascii >= 97 && ascii < 122)) {
            str[i] = char(ascii + 1);
        }
    }

    return str;
}

*/