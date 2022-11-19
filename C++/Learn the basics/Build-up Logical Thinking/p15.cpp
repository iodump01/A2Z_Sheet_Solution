// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285196/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_15
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 5;


 for(int i = n; i >= 1; i--){
         for(int j = 0; j < i; j++){
            cout << char('A'+j);
        }
        cout << endl;
     }
}
// Input : 
//        n = 5
// Output :
// ABCDE
// ABCD
// ABC
// AB
// A
