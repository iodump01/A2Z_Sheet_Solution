// https://bit.ly/3QugUVo

#include<bits/stdc++.h>
using namespace std;

vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        vector<long long> f;
        f.push_back(1);
        if(N == 1) return f;
        f.push_back(2);
        for(int i = 3; i < N; i++){
            long long ans = i* f[i-2];
            if(ans > N) break;
            f.push_back(ans);
        }
        return f;
    }

int main(){
    int n = 749834;
    for(long long i: factorialNumbers(n)){
        cout << i << " ";
    }
}

// Input
// 749834
// Output
// 1 2 6 24 120 720 5040 40320 362880 