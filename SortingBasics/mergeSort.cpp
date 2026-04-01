#include<bits/stdc++.h>
using namespace std;

//Merge Sort
//Time Complexity: O(n log n)
//Space Complexity: O(n)

void mergeSort(vector<int>& nums){
    int n=nums.size();
    if(n<=1){
        return;
    }
    int mid=n/2;
    vector<int> left(nums.begin(),nums.begin()+mid);
    vector<int> right(nums.begin()+mid,nums.end());
    mergeSort(left);
    mergeSort(right);
    merge(left,right,nums);
}

void merge(vector<int>& left,vector<int>& right,vector<int>& nums){
    int i=0,j=0,k=0;
    while(i<left.size() && j<right.size()){
        if(left[i]<right[j]){
            nums[k++]=left[i++];
        }else{
            nums[k++]=right[j++];
        }
    }
    while(i<left.size()){
        nums[k++]=left[i++];
    }
    while(j<right.size()){
        nums[k++]=right[j++];
    }
}

int main(){
    vector<int> data = {10, 50, 30, 70, 80, 60, 20};
    mergeSort(data);
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<" ";
    }
    return 0;
}