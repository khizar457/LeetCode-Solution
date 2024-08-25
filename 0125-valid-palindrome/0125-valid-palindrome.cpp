class Solution {
public:
    bool isPalindrome(string s) {
        // Remove non-alphanumeric characters and convert to lowercase
        string cleanStr;
        for (char c : s) {
            if (isalnum(c)) {
                cleanStr.push_back(tolower(c));
            }
        }
        
        // Check if clean string is a palindrome
        int left = 0;
        int right = cleanStr.length() - 1;
        while (left < right) {
            if (cleanStr[left] != cleanStr[right]) {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
};