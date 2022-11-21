// https://practice.geeksforgeeks.org/problems/square-pattern-1662287714/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_21
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0; i < n; i++){
         for(int j = 0; j < n; j++){
             if(i == 0 || i == n-1 || j == 0 || j == n-1) cout << "*";
             else cout << " ";
         }
         cout << endl;
    }
    return 0;
}
// Input : 
//        n = 5
// Output :     
//        *****
//        *   *
//        *   *
//        *   *
//        *****