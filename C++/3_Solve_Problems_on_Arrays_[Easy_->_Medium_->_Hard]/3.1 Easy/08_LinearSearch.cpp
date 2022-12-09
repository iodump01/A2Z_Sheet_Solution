// https://bit.ly/3KcpHcB

#include<bits/stdc++.h>
using namespace std;

int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       for(int i = 0; i<N; i++){
           if(arr[i] == K) return 1;
       }
       return -1;
    }

int main(){
    int arr[] = {2,4,7,33,37,45,54,54,56,65,73,77,334,};
    cout << searchInSorted(arr,sizeof(arr)/sizeof(arr[0]),33);
}

// Input
// 2 4 7 33 37 45 54 54 56 65 73 77 334 
// Output
// 1