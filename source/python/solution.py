class pySolution:
    def py_isPalindrome(self, s: str) -> bool:

        # 👈👉 Initialize two pointers at both ends of the string
        startPtr: int = 0
        endPtr: int = len(s) - 1

        # 🔁 Traverse until both pointers meet
        while startPtr < endPtr:

            # 🔤🔢 Case 1: Both characters are alphanumeric
            if s[startPtr].isalnum() and s[endPtr].isalnum():

                # 🔽 Compare characters in lowercase (case-insensitive)
                if s[startPtr].lower() != s[endPtr].lower():
                    return False  # ❌ Mismatch → not a palindrome

                # 🔁 Move both pointers inward
                startPtr += 1
                endPtr -= 1

            # 🚫 Case 2: Left character is NOT alphanumeric → skip it
            elif not s[startPtr].isalnum():
                startPtr += 1

            # 🚫 Case 3: Right character is NOT alphanumeric → skip it
            elif not s[endPtr].isalnum():
                endPtr -= 1

        # ✅ All valid characters matched → it's a palindrome
        return True