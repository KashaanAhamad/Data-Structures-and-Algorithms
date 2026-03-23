#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>
//https://www.geeksforgeeks.org/problems/tuples-with-same-product/0


int tuplesSameProduct(vector<int> &nums, int n)
{
    unordered_map<int, int> hash;
        int tuples = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int p = nums[i] * nums[j];
                hash[p]++;
            }
            
        }
        for (auto& it : hash) {
                int prod = it.first;
                int freq = it.second;
                tuples += (freq * (freq - 1)) / 2;
            }
        return tuples * 8;
}

int main(int argc, char const *argv[])
{
    
    vector<int> nums={2,3,4,6};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    cout<<tuplesSameProduct(nums, n);
    
    return 0;
}