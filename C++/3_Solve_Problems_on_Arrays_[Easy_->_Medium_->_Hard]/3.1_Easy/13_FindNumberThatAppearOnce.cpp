// https://bit.ly/3dudCD8 
 
#include <bits/stdc++.h> 
using namespace std; 
 
class Solution{ 
public:  
 int search(int A[], int N){ 
     //code 
     if(N == 1) return A[0]; 
      
     int ans = -19999; 
     for(int i = 1; i<N; i++){ 
         if(ans == -19999){ 
             ans = A[i-1] ^ A[i]; 
             continue; 
         } 
         ans ^= A[i]; 
     } 
      
     return ans; 
      
 } 
}; 
 
 
int main() 
{ 
    int t,len; 
    cin>>t; 
    while(t--) 
    { 
        cin>>len; 
        int arr[len]; 
        for(int i=0;i<len;i++){ 
            cin>>arr[i]; 
        } 
        Solution ob; 
        cout<<ob.search(arr, len)<<'\n'; 
    } 
    return 0; 
} 
 
// Input 
// 5 
// 3 7 3 2 7  
// Output 
// 2 