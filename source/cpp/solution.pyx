from libcpp.string cimport string

# 🔗 Declare external C++ class and method from header file
cdef extern from 'solution.hpp':
    cdef cppclass Solution:
        Solution() except +                 # ⚙️ Constructor (handles C++ exceptions)
        bool isPalindrome(string s)         # 🔁 Function to check palindrome

# 🧩 Cython wrapper class to interact with C++ Solution
cdef class cppSolution:
    cdef Solution *ptr                     # 📌 Pointer to C++ Solution object
    
    def __init__(self) -> None:
        # 🚀 Allocate memory for C++ object
        self.ptr = new Solution()
    
    def __dealloc__(self):
        # 🧹 Free allocated memory to prevent memory leaks
        del self.ptr

    def cpp_isPalindrome(self, s):
        """
        🔍 Wrapper function to call C++ isPalindrome
        
        Steps:
        1. Convert Python string → C++ std::string
        2. Call C++ function
        3. Return boolean result back to Python
        """
        
        # 🔤 Convert Python string to C++ std::string (UTF-8 encoding)
        cdef string cpp_s = s.encode("utf-8") 
        
        # ⚡ Call C++ function using pointer
        cdef bool cpp_result = self.ptr.isPalindrome(cpp_s)
        
        # 🔁 Return result to Python layer
        return cpp_result