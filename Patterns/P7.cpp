#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>

int main(int argc, char const *argv[])
{
    int RC;
    cin >> RC;

    for (int i = 0; i < RC; i++)
    {

        for (int j = 0; j < RC - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < RC - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}