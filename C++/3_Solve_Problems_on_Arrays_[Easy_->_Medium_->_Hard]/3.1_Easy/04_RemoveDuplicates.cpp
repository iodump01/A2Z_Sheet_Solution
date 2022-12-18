// https://bit.ly/3w7b6ck

#include<bits/stdc++.h>
using namespace std;

int remove_duplicate(int a[],int n){
    // code here
    int curind = 1;
    int curele = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] != curele){
            a[curind] = a[i];
            curele = a[i];
            curind++;
        }
    }
    
    return curind;
}

int main(){
    int arr[] = {1,2,2,3,3,3,4,4,5};
    cout << remove_duplicate(arr, sizeof(arr)/sizeof(arr[0]));
}

// Input
// 1 2 2 3 3 3 4 4 5
// Output
// 5