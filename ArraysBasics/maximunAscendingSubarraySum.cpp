#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>
// Problem statement:https://leetcode.com/problems/maximum-ascending-subarray-sum/?envType=daily-question&envId=2025-02-04

int AscendingSubarraySum(int arr[], int n)
{
    int sum=arr[0];
    int maxno=0;
    for(int i=1; i<n;i++){
        
        if(arr[i]>arr[i-1]){
            sum+=arr[i];
           
        }
        else{
             maxno=max(maxno,sum);
            sum=arr[i];
            
        }
        
        


    }
    return max(sum,maxno);
}

int main(int argc, char const *argv[])
{
    
    int arr[] = {12,17,15,13,10,11,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    
    cout<<AscendingSubarraySum(arr, n);

     
    return 0;
}