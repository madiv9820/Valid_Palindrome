# Valid Palindrome - 🧹 Clean & Compare Approach

### 💡 Intuition
When solving the **Valid Palindrome** problem, the tricky part isn’t the palindrome check — it’s handling noise in the string:
- spaces 🫥
- punctuation ❗
- mixed casing 🔠

👉 So instead of directly checking the string, we:
1. **Clean it 🧹** → keep only alphanumeric characters & normalize case
2. **Compare it 🔁** → check if it reads the same forward and backward

### ⚙️ Approach
#### 🧹 Step 1: Clean the String
- Traverse the input string
- Keep only:
    - alphabets (A–Z, a–z) 🔤
    - digits (0–9) 🔢
- Convert all characters to lowercase

👉 Result: a normalized string ready for comparison

#### 🔁 Step 2: Compare with Reverse
- Reverse the cleaned string
- Check if: `cleaned_string == reversed_string`
- If yes ✅ → it's a palindrome
- If no ❌ → not a palindrome

### 🧠 Why This Works
A palindrome depends only on **character order**, not formatting.

By removing irrelevant characters and normalizing case:
- `"A man, a plan, a canal: Panama"` <br>
➝ `"amanaplanacanalpanama"` ✅

### 📊 Complexity Analysis
#### ⏱️ Time Complexity: `O(n)`
- Cleaning the string → O(n)
- Reversing the string → O(n)
- Comparison → O(n)

👉 Overall: O(n)

#### 🧠 Space Complexity: `O(n)`
- Extra string used to store cleaned characters

👉 Can be optimized to **`O(1)`** using two pointers (without extra space)

### ✨ Pros & Cons
#### ✅ Pros
- Simple and intuitive 💡
- Easy to implement and debug 🛠️
- Great for beginners & interviews 👨‍💻

#### ❌ Cons
- Uses extra space (not optimal) 📦
- Slightly slower than in-place solution

---