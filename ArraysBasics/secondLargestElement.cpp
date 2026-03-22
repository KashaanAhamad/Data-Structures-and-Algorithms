#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>
//Difficulty:easy
//Problem Statement:https://www.geeksforgeeks.org/problems/second-largest3735/1

int secondLargest(int arr[], int n)
{
    int largest=0;
    int secondLargest=0;
    for(int i=0;i<n;i++){
        secondLargest=max(secondLargest,largest);
        largest=max(arr[i],largest);
        // if(arr[i]>largest){
        //     secondLargest=largest;
        //     largest=arr[i];
            
        // }
    }
    return secondLargest;
}

int main(int argc, char const *argv[])
{
    int arr[] = {12,35,1,10,34,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<<secondLargest(arr, n);

     
    return 0;
}