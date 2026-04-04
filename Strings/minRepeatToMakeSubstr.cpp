#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>

//Ptoblem statement:-https://www.geeksforgeeks.org/minimum-number-of-times-a-has-to-be-repeated-such-that-b-is-a-substring-of-it/?ref=gcse_ind

int minRepeats(string& s1,string& s2)
{   int count=1;
    string temp=s1;
    while(s1.length()<s2.length()){
        s1=temp+s1;
        count++;
    }
    if(s1.find(s2)!=-1) return count;
    s1=temp+s1;
    count++;
    if(s1.find(s2)!=-1) return count;
    return -1;
}

int main(int argc, char const *argv[])
{
    string s1="ab";
    string s2="cab";

    
    cout<<minRepeats(s1,s2);

    
    
    return 0;
}