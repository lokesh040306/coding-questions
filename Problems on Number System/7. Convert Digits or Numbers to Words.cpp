/*

string numberToWords(int n) {

    vector<string> ones = {
        "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    vector<string> teens = {
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    vector<string> tens = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    string result = "";

    // Thousands
    if (n >= 1000) {
        result += ones[n / 1000] + " thousand ";
        n %= 1000;
    }

    // Hundreds
    if (n >= 100) {
        result += ones[n / 100] + " hundred ";
        n %= 100;
    }

    // Tens and Ones
    if (n >= 20) {
        result += tens[n / 10] + " ";
        n %= 10;
    }
    else if (n >= 10) {
        result += teens[n - 10] + " ";
        n = 0;
    }

    if (n > 0) {
        result += ones[n];
    }

    return result;
}

*/