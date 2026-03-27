class pySolution:
    def py_isPalindrome(self, s: str) -> bool:

        # 🧹 Step 1: Build a cleaned string (only lowercase alphanumeric characters)
        cleaned_s: str = ''

        # 🚶 Traverse each character in the input string
        for character in s:

            # 🔤 If character is an alphabet (A-Z or a-z)
            if (
                character >= 'A' and character <= 'Z' or 
                character >= 'a' and character <= 'z'
            ):
                # 🔽 Convert to lowercase and append
                cleaned_s += character.lower()

            # 🔢 If character is a digit (0-9)
            elif character >= '0' and character <= '9':
                cleaned_s += character

            # 🚫 Ignore spaces, punctuation, and special characters

        # 🔁 Step 2: Check palindrome using reverse slicing
        # cleaned_s[::-1] creates a reversed copy of the string
        return cleaned_s == cleaned_s[::-1]