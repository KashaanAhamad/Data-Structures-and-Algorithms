//Leetcode Problem No. 152
//Maximum Product Subarray

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // Base case
        if (nums.empty()) return 0;

        int maxProduct = nums[0];
        int currentMax = nums[0];
        int currentMin = nums[0];

        for(int i=1;i<nums.size();i++){

            int num = nums[i];

            // If we hit a negative number, multiplying it by our current max 
            // will make it tiny, and multiplying by our current min could make it huge.
            // So, we simply swap the currentMax and currentMin!
            if (num < 0) {
                swap(currentMax, currentMin);
            }
            // Calculate the new max and min products ending at the current index
            currentMax = max(num, currentMax * num);
            currentMin = min(num, currentMin * num);

            // Update our global result
            maxProduct = max(maxProduct, currentMax);

        }
        return maxProduct;
        
    }
};