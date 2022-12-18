// https://bit.ly/3A2pKTh

#include<bits/stdc++.h>
using namespace std;

int findZeroes(int arr[], int n, int m) {
        // code here
        int j = -1;
        int cnt = 0;
        int max = 0;
    
        for(int i = 0; i< n; i++){
            if(arr[i] == 0){
                cnt++;
            }
            
            while(cnt > m){
                j++;
                if(arr[j] == 0){
                    cnt--;
                }
            }
            
            int len = i - j;
            if(len > max){
                max = len;
            }
        }
        
        return max;
    }  

int main(){
    int arr[] = {1,0,0,1,1,0,1,0,1,1,1};
    cout << findZeroes(arr, sizeof(arr)/sizeof(arr[0]), 2);
}

// Input
// 1,0,0,1,1,0,1,0,1,1,1
// Output
// 8