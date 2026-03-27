#define SOLUTION_H
#ifdef SOLUTION_H

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char* s) {
    // 🎯 Final answer (assume true unless proven otherwise)
    bool ans = true;

    // 📏 Get length of original string
    int n = strlen(s);

    // 🧹 Allocate memory for cleaned string (only alphanumeric chars)
    char* cleaned_s = (char*) malloc((n + 1) * sizeof(char));

    // 🔢 Tracks size of cleaned string
    int cleaned_s_size = 0;

    // 🚶 Traverse original string
    for(int i = 0; s[i] != '\0'; ++i) {

        // 🔤 If character is alphabet (A-Z or a-z)
        if(
            (s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= 'a' && s[i] <= 'z')
        ) {
            // 🔽 Convert to lowercase and store
            cleaned_s[cleaned_s_size++] = tolower(s[i]);
        }
        // 🔢 If character is a digit (0-9)
        else if(s[i] >= '0' && s[i] <= '9') {
            cleaned_s[cleaned_s_size++] = s[i];
        }
        // 🚫 Ignore all other characters (spaces, punctuation, etc.)
    }

    // 🏁 Null-terminate cleaned string
    cleaned_s[cleaned_s_size] = '\0';

    // 👈👉 Two-pointer approach to check palindrome
    int start = 0;
    int end = cleaned_s_size - 1;

    while(start < end) {
        // ❌ If mismatch found → not a palindrome
        if(cleaned_s[start] != cleaned_s[end]) {
            ans = false;
            break;
        }

        // 🔁 Move both pointers inward
        ++start;
        --end;
    }

    // 🧹 Free allocated memory to avoid memory leaks
    free(cleaned_s);

    // ✅ Return final result
    return ans;
}

#endif