// https://bit.ly/3dyCKZg

#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n) {
    // code here
    vector<int> v;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            v.push_back(arr[i]);
        }
    }
    int newsize = n-v.size();
    for(int i =0; i < newsize;i++){
        v.push_back(0);
    }
    
    for(int i = 0; i < n; i++){
        arr[i] = v[i];
    }
}

int main(){
    int arr[] = {74,89,0,0,0,0,0,24,6,0,0,0,0,-5,3,0,0,0,0,2,-6};
    pushZerosToEnd(arr,sizeof(arr)/sizeof(arr[0]));
    for(int i: arr){
        cout << i << " ";
    }
}

// Input
// 74 89 0 0 0 0 0 24 6 0 0 0 0 -5 3 0 0 0 0 2 -6
// Output
// 74 89 24 6 -5 3 2 -6 0 0 0 0 0 0 0 0 0 0 0 0 0 