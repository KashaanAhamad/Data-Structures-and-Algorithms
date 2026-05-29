#include <iostream>
using namespace std;

//leetcode 69. Sqrt(x)

class Solution {
public:
    int mySqrt(int x) {
        if (x<2)  { return x;}

        long long left=1;
        long long right=x;
        int ans=0;

        while(left<=right){
            long long mid=left +(right-left)/2;

            if(mid<=x/mid){
                ans=mid;
                left=mid+1;
            } else{
                right=mid-1;
            }
        }
        
        return ans;
    }
};

int main(){

    Solution s;
    cout<<s.mySqrt(4)<<endl;
    cout<<s.mySqrt(8)<<endl;
    return 0;
}
