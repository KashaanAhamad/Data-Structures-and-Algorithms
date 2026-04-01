#include<bits/stdc++.h>
using namespace std;

//Insertion Sort
//Time Complexity: O(n^2)
//Space Complexity: O(1)


void insertionSort(vector<int>& nums){
    int n=nums.size();
    for(int i=1;i<n;i++){
        int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
}

int main(){
    vector<int> data = {10, 50, 30, 70, 80, 60, 20};
    insertionSort(data);
    for(int i=0;i<data.size();i++){
        cout<<data[i]<<" ";
    }
    return 0;
}