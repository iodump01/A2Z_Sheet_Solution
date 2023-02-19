// https://bit.ly/3QugUVo
#include <bits/stdc++.h>
using namespace std;

long long fact(long long N){
        if(N<=1)return N;
        return N*fact(N - 1);
    }
vector<long long> factorialNumbers(long long N)
    {   
        vector<long long> ans;
        for(int i = 1;i<=N;i++){
            long long F = fact(i);
            if(fact(i) <N)ans.push_back(fact(i));
            else if(F == N){
                ans.push_back(F);
                break;
            }
            else break;
            
        }
        return ans;
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
