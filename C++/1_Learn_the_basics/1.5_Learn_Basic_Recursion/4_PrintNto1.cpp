// https://bit.ly/3LOkcBn

#include<bits/stdc++.h>
using namespace std;

void printNos(int N)
{
    //Your code here
    if(N == 0) return;
    cout << N << " ";
    printNos(N-1);
}

int main(){
    int n = 8;
    printNos(n);
}

// Input
// 8
// Output
// 8 7 6 5 4 3 2 1 