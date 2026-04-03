#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

//Compile it using g++ -o main.exe <File_Relative_Path>


bool isAnagram(string s1, string s2){
    int n=s1.length();
    int m=s2.length();
    if(n!=m){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;
}

int main(int argc, char const *argv[])
{
    string s1="anagram";
    string s2="nagaram";
    cout<<isAnagram(s1,s2);
    return 0;
}