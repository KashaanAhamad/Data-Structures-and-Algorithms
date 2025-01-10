#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

// Problem statement: https://www.hackerrank.com/challenges/compare-the-triplets/problem
vector<int> compareTriplets(int a[], int b[])
{
    int i = 0;
    vector<int> result = {0, 0};

    while (i < 3)
    {
        if (a[i] > b[i])
        {
            result[0]++;
        }
        else if (a[i] < b[i])
        {
            result[1]++;
        }
        i++;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int a[] = {13, 20, 9};
    int b[] = {2, 16, 7};

    vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}