#include<bits/stdc++.h>
using namespace std;

//Bubble Sort
//Time Complexity: O(n^2)
//Space Complexity: O(1)

void bubbleSort(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

int main(){
    vector<int> data = {10, 50, 30, 70, 80, 60, 20};
    bubbleSort(data);
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<" ";
    }
    return 0;
}