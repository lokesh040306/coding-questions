/*

class Solution {
public:
    string removeVowels(string s) {
    
        string result = "";

        for (char ch : s) {
        
            char lower = tolower(ch);

            // Skip if character is a vowel
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                continue;
            }

            // Append non-vowel to result
            result += ch;
        }

        return result;
    }
};

*/