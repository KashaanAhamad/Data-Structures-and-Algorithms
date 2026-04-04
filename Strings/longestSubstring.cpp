#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Compile it using g++ -o main.exe <File_Relative_Path>

//Function to check if a substring is unique


int longestSubstring(string s){
    int n=s.length();
    int maxLen=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(isUnique(s,i,j)){
                maxLen=max(maxLen,j-i+1);
            }
        }
    }
    return maxLen;
}

bool isUnique(string s,int start,int end){
    for(int i=start;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(s[i]==s[j]){
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    string s="abcabcbb";
    cout<<longestSubstring(s);
    return 0;
}