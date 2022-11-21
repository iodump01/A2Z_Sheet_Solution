// https://bit.ly/3K2epHv

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
    int n = 5;
    printNos(n);
}

// Input
// 5
// Output
// 1 2 3 4 5