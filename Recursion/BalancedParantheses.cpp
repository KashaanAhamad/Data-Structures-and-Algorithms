#include <bits/stdc++.h>
using namespace std;
// Compile it using g++ -o main.exe <File_Relative_Path>
//  ./main.exe
//Problem completed 

// Function to generate balanced parentheses
void BP(int n, int l, int r, int i, char *s)
{
    // Base case: if the current index reaches 2*n, print the string
    if (i == 2 * n)
    {
        s[i] = '\0'; // Null-terminate the string
        cout << s << endl;
        return;
    }

    // If the number of opening and closing brackets are equal, add an opening bracket
    if (l == r)
    {
        s[i] = '(';
        BP(n, l + 1, r, i + 1, s);
    }
    // If the number of opening brackets is greater than closing brackets
    else if (l > r)
    {
        // If we have not used all opening brackets, add an opening bracket
        if (l < n)
        {
            s[i] = '(';
            BP(n, l + 1, r, i + 1, s);
        }
        // Add a closing bracket
        s[i] = ')';
        BP(n, l, r + 1, i + 1, s);
    }
}

int main()
{
    int n = 4; // Number of pairs of parentheses
    char s[2 * n + 1]; // Array to store the current combination (+1 for null terminator)

    // Call the function to generate balanced parentheses
    BP(n, 0, 0, 0, s);
    int j=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<j;i++){
        cout<<s[i];
    }

    return 0;
}