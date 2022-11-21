// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718712/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_13
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
}
// Input : 
//        n = 5
// Output :
// 1  
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15



