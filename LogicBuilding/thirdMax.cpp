//Leetcode Problem No. 414

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        

        long long first=LLONG_MIN;
        long long second=LLONG_MIN;
        long long third=LLONG_MIN;

        for(int i=0;i<nums.size();i++){
            int current = nums[i];

            // Ignore duplicates: if we've already tracked this number, skip it
            if(current ==first || current ==second || current ==third ){
                continue;
            }

            // Scenario A: We found a new absolute maximum
            if(current>first){
                third=second;
                second =first;
                first =current;
            // Scenario B: The number is between first and second
            }else if(current >second){
                third =second;
                second =current;
            // Scenario C: The number is between second and third
            }else if(current>third){
                third =current;
            }  
        } 
        // Check if a third maximum was ever actually found.
        // If it is still LLONG_MIN, it means the array had less than 3 distinct numbers.
        if (third == LLONG_MIN) {
            return first; 
        }
        return third;
        
    }
};