#include<bits/stdc++.h>
using namespace std;

//Quick Sort
//Time Complexity: O(n log n)
//Space Complexity: O(log n)

//Theory: 
//1. Pick a pivot element
//2. Partition the array around the pivot
//3. Recursively sort the left and right subarrays

void quickSort(vector<int>& nums){
    int n=nums.size();
    if(n<=1){
        return;
    }
    int pivot=nums[n-1];
    int i=0,j=n-2;
    while(i<=j){
        if(nums[i]<pivot){
            i++;
        }else{
            swap(nums[i],nums[j]);
            j--;
        }
    }
    swap(nums[i],nums[n-1]);
    quickSort(vector<int>(nums.begin(),nums.begin()+i));
    quickSort(vector<int>(nums.begin()+i+1,nums.end()));
}

int main(){
    vector<int> data = {10, 50, 30, 70, 80, 60, 20};
    quickSort(data);
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<" ";
    }
    return 0;
}