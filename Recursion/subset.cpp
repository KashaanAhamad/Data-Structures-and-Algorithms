#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>
//Finding no. of subset/count whose sume is equal to sum
//each element given in arr is distinct
int arr[] = {4,1,5,6,3,2};
int n = sizeof(arr) / sizeof(arr[0]);


void countSS(int sum, int i,int& count)
{
    if(sum==0){
        count++;
        return;
    }
    if(i==n) {return;}

    countSS(sum-arr[i],i+1,count);
    countSS(sum,i+1,count);

}

int main(int argc, char const *argv[])
{
    int sum=6;
    int count=0;

    countSS(sum,0,count);
    cout<<count;
    
    return 0;
}