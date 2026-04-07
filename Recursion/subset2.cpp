#include <bits/stdc++.h>
#include <stdio.h>
#include <ctime>
using namespace std;

//Finding multiple combination or subset which has sum == given sum
//same element can be used multiple times

// Compile it using g++ -o main.exe <File_Relative_Path>

// Global variable
//int a[] = {1, 2, 3};
int a[] = {4,1,5,6,3,2};
int n = sizeof(a) / sizeof(a[0]);

int allSS(int sum, int i)
{
    if (sum < 0)
        return 0;
    if (sum == 0)
        return 1;
    if (i == n)
        return 0;

    return allSS(sum - a[i], i) + allSS(sum, i + 1);
}

int main(int argc, char const *argv[])
{
    int sum = 4;

    cout << allSS(sum, 0);

    return 0;
}