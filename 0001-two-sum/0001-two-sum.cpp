class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int complement = target - nums[i];
            auto it = find(nums.begin() + i + 1, nums.end(), complement);
            if (it != nums.end()) {
                int index = distance(nums.begin(), it);
                return {i, index};
            }
        }
        return {};
    }
};