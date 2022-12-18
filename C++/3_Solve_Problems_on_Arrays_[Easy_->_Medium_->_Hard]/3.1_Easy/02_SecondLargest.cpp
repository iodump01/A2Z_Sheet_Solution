// https://bit.ly/3pFvBcN

#include<bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n) {
        // code here
        int ele = arr[0];
        for(int i = 0; i < n; i++){
            if(ele < arr[i]){
                ele = arr[i];
            }
        }
        
        int smax = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] < ele && smax < arr[i]){
                smax = arr[i];
            }
        }
        
        return smax;
    }

int main(){
    int arr[] = {3,7,4,5,2};
    cout << print2largest(arr,sizeof(arr)/sizeof(arr[0]));
}

// Input
// 3 7 4 5 2
// Output
// 5