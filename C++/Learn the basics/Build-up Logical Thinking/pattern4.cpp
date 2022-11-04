// https://practice.geeksforgeeks.org/problems/triangle-number-1661428795/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_4

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

// Input
// 5

// Output
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5 