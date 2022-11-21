// https://bit.ly/3C9KZ8G

#include<bits/stdc++.h>
using namespace std;

long long sumOfSeries(long long N) {
        // code here
        if(N == 0) return 0;
        
        return N*N*N + sumOfSeries(N-1);
    }

int main(){
    int n = 100;
    cout << sumOfSeries(n);
}

// Input
// 100
// Output
// 25502500