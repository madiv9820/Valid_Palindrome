from libc.stdlib cimport malloc, free
from libc.string cimport strcpy

# 🔗 Declare external C function from header file
cdef extern from 'solution.h':
    bint isPalindrome(char* s)   # 🔁 C function returning boolean

# 🧩 Cython wrapper class to interact with C implementation
cdef class cSolution:

    def c_isPalindrome(self, s):
        """
        🔍 Wrapper function to call C isPalindrome
        
        Steps:
        1. Convert Python string → bytes (C-compatible)
        2. Allocate memory for C string
        3. Copy bytes → char*
        4. Call C function
        5. Free memory
        6. Return result to Python
        """

        # 🔤 Convert Python string → UTF-8 encoded bytes
        cdef bytes py_bytes = s.encode("utf-8")

        # 📌 Declare C variables (must be at top in Cython)
        cdef char* c_s
        cdef bint cpp_result

        # 📏 Allocate memory (+1 for null terminator '\0')
        c_s = <char*> malloc((len(py_bytes) + 1) * sizeof(char))

        # ⚠️ Check allocation success
        if c_s:
            # 📋 Copy bytes → C-style string (null-terminated)
            strcpy(c_s, py_bytes)

            # ⚡ Call C function
            cpp_result = isPalindrome(c_s)

            # 🧹 Free allocated memory to avoid leaks
            free(c_s)

            # 🔁 Convert C result → Python bool and return
            return bool(cpp_result)