#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

// Problem statement:https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/HS08TEST

void atm(int X, float Y)
{
    if (X % 5 == 0)
    {
        Y = Y - X - 0.5;
        cout << fixed << setprecision(2) << Y << endl;
    }

    else if (X > Y)
    {
        cout << fixed << setprecision(2) << Y << endl;
    }
}

int main()
{
    int X;
    float Y;
    cin >> X >> Y;
    atm(X, Y);
}

