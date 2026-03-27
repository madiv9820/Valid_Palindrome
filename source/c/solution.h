#define SOLUTION_H
#ifdef SOLUTION_H

#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char* s) {

    // 👈👉 Two pointers: start from both ends of the string
    int startPtr = 0;
    int endPtr = strlen(s) - 1;

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

#endif