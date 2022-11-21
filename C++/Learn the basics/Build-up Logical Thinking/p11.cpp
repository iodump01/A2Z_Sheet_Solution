// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718455/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_11

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        int val = (i % 2) ? i : i - 1;
        for (int j = i % 2; j <= val; j++)
        {
            cout << j % 2;
        }
        cout << endl;
    }
}
// Input :
//        n = 5
// Output :
//        1
//        01
//        101
//        0101
//        10101
