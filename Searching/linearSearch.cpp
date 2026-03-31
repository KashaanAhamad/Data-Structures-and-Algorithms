#include<bits/stdc++.h>
#include<stdio.h>


//Linear Search
//Time Complexity: O(n)
//Space Complexity: O(1)

using namespace std;

int linearSearch(vector<int>& nums, int target){

    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){

    vector<int> data = {10, 50, 30, 70, 80, 60, 20};
    int target = 30;
    
    int result = linearSearch(data, target);
    
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;
        
    return 0;
}