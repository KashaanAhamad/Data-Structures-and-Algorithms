//Leetcode Problem No. 53
//Maximum Subarray
//Kadane's Algorithm


class Solution {
public:
    int maxSubArray(vector<int>& nums) {

       int maxSum=nums[0];
       int currSum=nums[0];

       for(int i=1;i<nums.size();i++){
        // Do we add the current number to our existing subarray, 
        // or is it better to start a brand new subarray from here?

            currSum = max(nums[i], currSum + nums[i]);

            // Keep track of the highest sum we've seen so far
            maxSum = max(maxSum, currSum);
       }
       return maxSum;
    }
};