# [🔁 Valid Palindrome](https://leetcode.com/problems/valid-palindrome/description/?envType=study-plan-v2&envId=top-interview-150)

### 🧩 Problem Overview
A **palindrome** is a string that reads the same forward and backward — simple, right? 🤔

But here’s the twist 👇
Before checking if the string is a palindrome, you must:
- 🔡 Convert all uppercase letters to lowercase
- 🚫 Remove all non-alphanumeric characters (like spaces, punctuation, symbols, etc.)

Only **letters (a–z)** and **digits (0–9)** are allowed in the final check!

### 🎯 Goal
Given a string `s`, determine:

👉 Is it a palindrome after cleaning it?
- ✅ Return true if it is
- ❌ Return false otherwise

### 🧪 Examples
#### ✨ Example 1
```
Input:  "A man, a plan, a canal: Panama"
```
🧹 After cleaning:
```
"amanaplanacanalpanama"
```
🔁 Reads same forward & backward → ✅ true

#### ❌ Example 2
```
Input:  "race a car"
```
🧹 After cleaning:
```
"raceacar"
```
🔁 Not the same both ways → ❌ false

### 🌫️ Example 3
```
Input:  " "
```
🧹 After cleaning:
```
""
```
🤯 Empty string is considered a palindrome → ✅ true

### 🧠 Key Insights
- **🧼 Sanitization is crucial** — ignore everything except letters and numbers
- 🔁 Palindrome check happens **after cleaning**, not before
- 🧘 Even an **empty string counts as a palindrome**

### 📌 Constraints
- 🧵 **`1 <= s.length <= 2 * 10⁵`**
- 🔤 String contains only printable ASCII characters

### 🚀 Why This Problem Matters
This problem is a classic test of:
- 🧠 String manipulation skills
- 🔍 Attention to detail (handling edge cases!)
- ⚡ Writing efficient logic for large inputs
---