#define SOLUTION_HPP
#ifdef SOLUTION_HPP

#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        // 🧹 Step 1: Create a cleaned string (only lowercase alphanumeric)
        string cleaned_s = "";

        // 🚶 Traverse each character in the original string
        for(char& character: s) {

            // 🔤 If character is an alphabet (A-Z or a-z)
            if(
                (character >= 'A' and character <= 'Z') or
                (character >= 'a' and character <= 'z')
            ) {
                // 🔽 Convert to lowercase and append
                cleaned_s += tolower(character);
            }

            // 🔢 If character is a digit (0-9)
            else if(character >= '0' and character <= '9') {
                cleaned_s += character;
            }

            // 🚫 Ignore spaces, punctuation, and special characters
        }

        // 👈👉 Step 2: Two-pointer palindrome check
        int start = 0;
        int end = cleaned_s.size() - 1;

        while(start < end) {

            // ❌ Mismatch → not a palindrome
            if(cleaned_s[start] != cleaned_s[end])
                return false;

            // 🔁 Move pointers inward
            ++start;
            --end;
        }

        // ✅ All characters matched → it's a palindrome
        return true;
    }
};

#endif