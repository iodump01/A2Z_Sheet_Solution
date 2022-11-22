// https://bit.ly/3A2pKTh

#include<bits/stdc++.h>
using namespace std;

int missingNumber(int A[], int N)
{
    // Your code goes here
    int prefix[N+10]= {};
    for(int i = 0; i < N-1;i++){
        prefix[A[i]]++;
    }
    
    for(int i = 1; i < N+1;i++){
        if(prefix[i] == 0){
            return i;
        }
    }
}

int main(){
    int arr[] = {2,1,3};
    cout << missingNumber(arr, 4);
}

// Input
// 1 4 5 6 6
// 1 1 1 2 2 3 
// Output
// 1 2 3 4 5 6