#include<bits/stdc++.h>

//Binary Search
//Time Complexity: O(log n)
//Space Complexity: O(1)
using namespace std;

int binarySearch(vector<int>& nums, int target){
    int left =0;
    int right =nums.size()-1;

    
    while(left<=right){
        int mid= left+(right-left)/2;   // Prevents overflow

        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            left = mid+1;
        }
        else{
            right =mid-1;
        }
    }   
    return -1;  // Target not found
}


int main(){
    vector<int> data = {10, 50, 30, 70, 80, 60, 20};
    sort(data.begin(),data.end());  //sorted array
    int target = 20;
    
    int result = binarySearch(data, target);
    
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;
        
    return 0;
}