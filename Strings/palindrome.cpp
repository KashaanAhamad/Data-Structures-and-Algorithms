#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Compile it using g++ -o main.exe <File_Relative_Path>

bool isPalindrome(string s){
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    string s="madam";
    cout<<isPalindrome(s);
    return 0;
}