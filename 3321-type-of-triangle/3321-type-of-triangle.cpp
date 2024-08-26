class Solution {
public:
    bool isTriangle (vector<int>& nums){
                if ((nums[0] + nums[1]) > nums[2]){
            if ((nums[0] + nums[2]) > nums[1]){
                if ((nums[2] + nums[1]) > nums[0])
                {
                    return true;
                }
            }
        }
        return false;
    }
    string triangleType(vector<int>& nums) {
        if (!isTriangle(nums))
        {
            return "none";
        }
        if ((nums[0] == nums[1]) && nums[0] == nums[2])
        {
            return "equilateral";
        }
        
        if ((nums[0] == nums[1]) || (nums[0] == nums[2]) || (nums[1] == nums[2]))
        {
            return "isosceles";
        }
        
        if ((nums[0] != nums[1]) || (nums[0] != nums[2]))
        {
            return "scalene";      
        }

        return "triangle";
    }
};