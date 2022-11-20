//https://practice.geeksforgeeks.org/problems/square-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_1

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// Input
// 5

// output
// *****
// *****
// *****
// *****
// *****
