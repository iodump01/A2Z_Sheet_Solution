// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285334/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_16
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + i);
        }
        cout << endl;
    }
}
// Input :
//        n = 5
// Output :
// A
// BB
// CCC
// DDDD
// EEEEE

