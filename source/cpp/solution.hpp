#define SOLUTION_HPP
#ifdef SOLUTION_HPP

#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        // 👈👉 Initialize two pointers at both ends of the string
        int startPtr = 0;
        int endPtr = s.size() - 1;

        // 🔁 Traverse until both pointers meet
        while(startPtr < endPtr) {

            // 🔤🔢 Case 1: Both characters are alphanumeric
            if(isalnum(s[startPtr]) && isalnum(s[endPtr])) {

                // 🔽 Compare characters in lowercase (case-insensitive)
                if(tolower(s[startPtr]) != tolower(s[endPtr]))
                    return false;  // ❌ Mismatch → not a palindrome

                // 🔁 Move both pointers inward
                ++startPtr;
                --endPtr;
            }

            // 🚫 Case 2: Left character is NOT alphanumeric → skip it
            else if(!isalnum(s[startPtr])) {
                ++startPtr;
            }

            // 🚫 Case 3: Right character is NOT alphanumeric → skip it
            else if(!isalnum(s[endPtr])) {
                --endPtr;
            }
        }

        // ✅ All valid characters matched → it's a palindrome
        return true;
    }
};

#endif