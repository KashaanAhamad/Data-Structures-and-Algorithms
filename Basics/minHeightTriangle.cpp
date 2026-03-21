#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// Compile it using g++ -o main.exe <File_Relative_Path>
// Problem Statement:- https://dashboard.programmingpathshala.com/renaissance/practice/question?questionId=574&sectionId=1&moduleId=0&topicId=39&subtopicId=524&assignmentId=90

int minHeight(int base, int area)
{   float height;

    height= ceil((area*2.00)/base);
    return height;
}

int main(int argc, char const *argv[])
{
    int base;
    int area;
    cin>>base;
    cin>>area;
    
    cout<<minHeight(base, area);

    
    
    return 0;
}