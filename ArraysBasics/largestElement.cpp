#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>
//difficulty:easy
//Problemstatement:https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0

int largest(int arr[], int n)
{
    int max = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int arr[] = {13,4,1,5,1,67,2,128};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<<largest(arr, n);

    
    
    return 0;
}