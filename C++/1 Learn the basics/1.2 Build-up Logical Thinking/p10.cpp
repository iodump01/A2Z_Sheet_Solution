// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718013/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_10

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// Input
// 5

// output
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
