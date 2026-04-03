//Leetcode Problem No. 67
//Adding Binary

class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i=a.length()-1;
        int j= b.length()-1;
        int carry=0;

        // Keep going as long as there are digits left in either string, 
        // OR if there is still a carry left over at the very end.
        while(i>=0 || j>=0 || carry>0){
            int sum = carry;

            // Subtracting '0' converts the character to an actual integer
            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }
            // Append the remainder to the result string
            result += to_string(sum % 2);
            
            // Calculate the carry for the next iteration
            carry = sum / 2;
        }

        // We built the string backwards, so reverse it before returning
        reverse(result.begin(), result.end());
        
        return result;
    
        
    }
};