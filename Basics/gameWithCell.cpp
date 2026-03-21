#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>
// Problem Statement:-https://dashboard.programmingpathshala.com/renaissance/practice/question?questionId=573&sectionId=1&moduleId=0&topicId=39&subtopicId=524&assignmentId=90

int noOfSupplies(int n, int m)
{
    int total= ((n+1)/2)*((m+1)/2);
    return total;
}

int main(int argc, char const *argv[])
{
    int n;
    int m;
    cin>>n;
    cin>>m;

    cout<<noOfSupplies(n,m);

    
    return 0;
}