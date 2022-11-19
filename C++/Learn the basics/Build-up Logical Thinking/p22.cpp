// https://practice.geeksforgeeks.org/problems/square-pattern-1662666141/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_22
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int a[2*n][2*n] = {};
    int start = 0;
    int end = 2*n - 1;
    for(int i = n; i >= 1;i--){
         for(int j = start; j < end; j++){
             for(int k = start; k < end; k++){
                 if(j == start || j == end-1 || k == start || k == end-1) a[j][k] = i;
             }
         }
         start++;
         end--;
    }
    for(int i = 0; i < 2*n-1; i++){
         for(int j = 0; j < 2*n-1; j++){
             cout << a[i][j];
         }
         cout << endl;
     }
    return 0;
}
// Input : 
//        n = 5
// Output :    
//        543333345
//        543222345
//        543212345
//        543222345
//        543333345
//        544444445
//        555555555 
