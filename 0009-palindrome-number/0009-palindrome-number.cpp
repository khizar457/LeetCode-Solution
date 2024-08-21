class Solution {
public:
    bool isPalindrome(int x) {
        // Special case: Negative numbers are not palindromes
        if (x < 0)
            return false;
        
        int original = x;
        long long reversed = 0;
        
        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10LL + digit;
            x /= 10;
        }
        
        return original == reversed;
    }
};