// https://practice.geeksforgeeks.org/problems/double-triangle-pattern/1/?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_19

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// Input :
//       n = 5
// Output :
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
