#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

// Problem statement:https://www.hackerrank.com/challenges/halloween-sale/problem

int howManyGames(int p, int s, int d, int m)
{
    // Return the number of games you can buy
    int result = 0;

    while (s >= p)
    {
        result++;
        s = s - p;

        if (p - d >= m)
        {
            p = p - d;
                }
        else
        {
            p = m;
        }
    }

    return result;
}

int main(int argc, char const *argv[])
{
    int s = 80;
    int p = 20;
    int d = 3;
    int m = 6;

    cout << howManyGames(p, s, d, m);

    return 0;
}