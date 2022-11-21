// https://bit.ly/3QugUVo

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = n-1; i >= 0; i--){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

// Input
// 6
// 2 4 5 5 7 8
// Output
// 8 7 5 5 4 2  