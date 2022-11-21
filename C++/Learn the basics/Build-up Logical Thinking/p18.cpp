// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662286302/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_18
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j < n; j++)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
}
// Input :
//       n = 5
// Output :
//  E
//  DE
//  CDE
//  BCDE
//  ABCDE

