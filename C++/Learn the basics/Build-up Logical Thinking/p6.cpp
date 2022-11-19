//https://practice.geeksforgeeks.org/problems/triangle-number-1661489840/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_6

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 5;


    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << j;
         }
         cout << endl;
     }

}
// Input 
// 5

//output
//12345
//1234
//123
//12
//1
