#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>

class Solution
{
    public:
        // write your methods below
        bool checkPalindrome(string &s, int n)
        {
            int i=0;
            while( i<n/2){
                if(s[i]!=s[n-i-1])
                    return false;  
            
                i++;  
            }
            return true;
        }
};

int main(int argc, char const *argv[])
{
    string s = "abbea";
    int n = s.length();

    Solution obj;
    bool isPalindrome = obj.checkPalindrome(s, n);
    
    cout<<isPalindrome;
    
    return 0;
}