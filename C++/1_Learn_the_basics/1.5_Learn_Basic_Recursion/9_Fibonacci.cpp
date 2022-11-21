// https://bit.ly/3QUkkk2

#include<bits/stdc++.h>
using namespace std;

vector<long long> helper(int n, vector<long long> f){
        
    if(n == 2){
        f.push_back(1);
        f.push_back(1);
        return f;
    }
    
    f = helper(n-1, f);
    f.push_back(f[n-1-1] + f[n-1-2]);
    return f;
    
}

vector<long long> printFibb(int n) 
{
    //code here
    vector<long long> f;
    if(n == 1){
        f.push_back(1);
        return f;
    }
    return helper(n, f);
    
    
}

int main(){
    
    int n = 13;
    for(auto i :printFibb(n)){
        cout << i << " ";
    }
}

// Input
// 13
// Output
// 1 1 2 3 5 8 13 21 34 55 89 144 233 