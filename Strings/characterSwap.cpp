#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//
// Compile it using g++ -o main.exe <File_Relative_Path>

//Problem Statement:-https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/description/

//Function to check if two strings are almost equal
bool areAlmostEqual(string s1, string s2)
{
   int n = s1.length();
        int notEqual = 0;
        if (s1 == s2) {
            return true;
        }
        int firstIdx = 0;
        int secondIdx = 0;
        for (int i = 0; i < n; i++) {
            if (s1[i] != s2[i]) {
                notEqual++;

                if (notEqual > 2) {
                    return false;
                } else if (notEqual == 1) {
                    firstIdx = i;
                } else {
                    secondIdx = i;
                }
            }
        }
        
        return s1[firstIdx] == s2[secondIdx] && s1[secondIdx] == s2[firstIdx];
}

int main(int argc, char const *argv[])
{
    string s1="caa";
    string s2="aaz";
    
    cout<<areAlmostEqual(s1, s2);
    
    return 0;
}