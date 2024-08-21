class Solution {
public:
    vector<int> concatenateAndSort(vector<int>& arr1, vector<int>& arr2) {
        vector<int> arr3(arr1);
        arr3.insert(arr3.end(), arr2.begin(), arr2.end());
        sort(arr3.begin(), arr3.end());
        return arr3;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        vector<int> merged = concatenateAndSort(nums1, nums2);
        double result;
        if (n % 2 == 0) {
            n /= 2;
            result = (merged[n] + merged[n - 1]) / 2.0;
        } else {
            n /= 2;
            result = merged[n];
        }
        return result;
    }
};