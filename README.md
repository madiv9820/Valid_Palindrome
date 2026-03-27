# Valid Palindrome - 👈👉 Skip & Compare

### 💡 Intuition
Instead of creating a new cleaned string 🧹 (like in the previous approach),
we can **optimize space** by working directly on the original string.

👉 The idea is simple:
- Use **two pointers** from both ends 👈👉
- **Skip unwanted characters on the fly** 🚫
- Compare only valid characters 🔤🔢

### ⚙️ Approach
#### 👈👉 Step 1: Initialize Two Pointers
- **`start`** → beginning of string
- **`end`** → end of string

#### 🚫 Step 2: Skip Non-Alphanumeric Characters
- If character is not:
    - alphabet 🔤
    - digit 🔢 <br>👉 Move the pointer forward/backward

#### 🔽 Step 3: Compare Characters
- Convert both characters to lowercase
- Check: **`s[start] == s[end]`**
- If mismatch ❌ → return **`false`**
- If match ✅ → move both pointers inward

#### 🔁 Step 4: Continue Until Pointers Meet
- If all comparisons pass → it's a palindrome ✅

### 🧠 Why This Works
We **ignore irrelevant characters during traversal**, so:
- No need to build a new string 📦
- Same correctness, better efficiency 🚀

Example:
```
"A man, a plan, a canal: Panama"
```
👉 Compared as:
```
a == a
m == m
...
```

### 📊 Complexity Analysis
#### ⏱️ Time Complexity: `O(n)`
- Each character is visited at most once <br> 👉 Overall: **`O(n)`**

#### 🧠 Space Complexity: `O(1)` ⭐
- No extra data structures used <br> 👉 Fully in-place solution

### ✨ Pros & Cons
#### ✅ Pros
- 🚀 Optimal space usage (O(1))
- ⚡ Efficient and fast
- 🧠 Strong interview solution
- 👈👉 Classic two-pointer pattern

#### ❌ Cons
- Slightly more complex logic than simple approach 🤏
- Requires careful pointer handling

---