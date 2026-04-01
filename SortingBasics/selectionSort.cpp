#include<bits/stdc++.h>
using namespace std;

//Selection Sort
//Time Complexity: O(n^2)
//Space Complexity: O(1)

//Theory: Selection Sort is a simple sorting algorithm that works by repeatedly finding 
//the minimum element from the unsorted part of the array and putting it at the beginning.

void selectionSort(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[minIndex]){
                minIndex=j;
            }
        }
        swap(nums[i],nums[minIndex]);
    }
}

int main(){
    vector<int> data = {10, 50, 30, 70, 80, 60, 20};
    selectionSort(data);
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<" ";
    }
    return 0;
}