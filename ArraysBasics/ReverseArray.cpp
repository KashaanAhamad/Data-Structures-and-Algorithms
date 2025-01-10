#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>

class ReverseArray
{
    private:
        /* data */
    public:
        ReverseArray() {}
        void reverseArray(int arr[], int n)
        {
           
            for (int i = 0; i < n/2; i++)
            {
               arr[i]= arr[i]+arr[n-i-1];
               arr[n-i-1]=arr[i]-arr[n-i-1];
               arr[i]=arr[i]-arr[n-i-1];
            }
        }
};

int main(int argc, char const *argv[])
{
    int arr[] = {13,4,1,5,1,67,2};
    int n = sizeof(arr) / sizeof(arr[0]);

    ReverseArray obj;
    obj.reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}