#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
//Problem No 3443 Maximum Manhattan distance After K Changes
// Compile it using g++ -o main.exe <File_Relative_Path>

int maxDistance(string& s,int& k){
    int n=s.length();
   
    int north=0;
    //int south=0;
    int east=0;
    //int west=0;

    int maxMD=0;

    for(int i=0;i<n;i++){
        if(s[i]=='N') north++;
        else if(s[i]=='S') north--;//south++;
        else if(s[i]=='E') east++;
        else if(s[i]=='W') east--;//west++;

        int MD=abs(east) + abs(north);

        int step=i+1;
        int waste=step-MD;
    
        int extra=0;
        if(waste!=0){
            extra=min(2*k,waste);
        }
        int finalMD=MD+extra;
    
         maxMD=max(maxMD,finalMD);
    }

    
    return maxMD;
    
}

int main(int argc, char const *argv[])
{
   string s="NWSE";
   int k=1;

   int value=maxDistance(s,k);
    cout<<value;
    return 0;
}