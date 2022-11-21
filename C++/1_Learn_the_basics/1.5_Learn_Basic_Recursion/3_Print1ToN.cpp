// https://bit.ly/3w3qhDh

#include<bits/stdc++.h>
using namespace std;

void printNos(int N)
{
    //Your code here
    if(N == 0) return;
    printNos(N-1);
    cout << N << " ";
}

int main(){
    int n = 8;
    printNos(n);
}

// Input
// 9
// Output
// 1 2 3 4 5 6 7 8 9