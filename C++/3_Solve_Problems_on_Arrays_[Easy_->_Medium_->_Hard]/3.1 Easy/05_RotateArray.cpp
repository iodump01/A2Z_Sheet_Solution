// https://bit.ly/3dnn9vC

#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int k, int n) 
    { 
       // Your code goes here
       
           k = k%n;
           int narr[n] = {};
           int j = 0;
           for(int i = k; i< n;i++){
               narr[j++] = arr[i];
           }
           for(int i = 0; i< k;i++){
               narr[j++] = arr[i];
           }
           
           for(int i = 0; i<n ;i++){
               arr[i] = narr[i];
           }
       
       
    } 

int main(){
    int arr[] = {74,89,24,6,-5,3,2,-6};
    leftRotate(arr,5,sizeof(arr)/sizeof(arr[0]));
    for(int i: arr){
        cout << i << " ";
    }
}

// Input
// 74 89 24 6 -5 3 2 -6
// Output
// 3 2 -6 74 89 24 6 -5 