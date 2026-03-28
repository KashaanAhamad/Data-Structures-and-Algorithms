//Leetcode Problem No. 283
//Move Zeros

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // This keeps track of where the next non-zero element should go
        int insertPos = 0;
        
        // Loop through the array with our 'scout' pointer
        for (int i = 0; i < nums.size(); i++) {
            
            // When we find a number that is NOT zero...
            if (nums[i] != 0) {
                // Swap it with the element at insertPos
                swap(nums[insertPos], nums[i]);
                
                // Move our insert position forward for the next non-zero number
                insertPos++;
            }
        }
        
    }
};