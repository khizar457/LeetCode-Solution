class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
        // Sort the array to facilitate two-pointer technique
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; ++i) {
            // Avoid duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Move left and right to the next different numbers
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    while (left < right && nums[right] == nums[right - 1]) --right;
                    
                    // Move both pointers towards the center
                    ++left;
                    --right;
                } else if (sum < 0) {
                    ++left;  // We need a larger sum, move left pointer to the right
                } else {
                    --right;  // We need a smaller sum, move right pointer to the left
                }
            }
        }
        
        return result;
    }
};
