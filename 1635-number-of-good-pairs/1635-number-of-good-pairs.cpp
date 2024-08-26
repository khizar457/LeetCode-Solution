class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mpp;
        int count=0;
        for (int i=0;i<nums.size();i++){
            count += mpp[nums[i]];
            mpp[nums[i]]++;
        }
        return count;
    }
};