// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_17
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i; j++){
             cout << " ";
         }
     for(int j = 0; j < i; j++){
             cout << char('A'+j);
         }
         for(int j = i-2; j >= 0; j--){
         cout << char('A'+j);
     }
         cout << endl;
     }
}
// Input : 
//        n = 5
// Output :
//         A
//        ABA
//       ABCBA
//      ABCDCBA
//     ABCDEDCBA
