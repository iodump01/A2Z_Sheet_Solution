// https://bit.ly/3y2BiWz

#include<bits/stdc++.h>
using namespace std;

void printNos(int N, string s)
{
    //Your code here
    if(N == 0) return;
    printNos(N-1, s);
    cout << s << " ";
}

int main(){
    int n = 8;
    string s = "GFG";
    printNos(n, s);
}

// Input
// 8
// Output
// GFG GFG GFG GFG GFG GFG GFG GFG 