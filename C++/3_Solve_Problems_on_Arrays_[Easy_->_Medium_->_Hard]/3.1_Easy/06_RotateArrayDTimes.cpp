// https://bit.ly/3dyCKZg

#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n,int d) 
    { 
       // Your code goes here
       
           d = d%n;
           int narr[n] = {};
           int j = 0;
           for(int i = d; i< n;i++){
               narr[j++] = arr[i];
           }
           for(int i = 0; i< d;i++){
               narr[j++] = arr[i];
           }
           
           for(int i = 0; i<n ;i++){
               arr[i] = narr[i];
           }
       
       
    } 

int main(){
    int arr[] = {74,89,24,6,-5,3,2,-6};
    leftRotate(arr,sizeof(arr)/sizeof(arr[0]),129);
    for(int i: arr){
        cout << i << " ";
    }
}

// Input
// 74 89 24 6 -5 3 2 -6
// Output
// 89 24 6 -5 3 2 -6 74 