// https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662287416/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_20
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for(int j = 0; j < 2*(n-i); j++)
        {
             cout << " ";
        }
        for(int j = 0; j < i; j++)
        {
             cout << "*";
        }
         cout << endl;
    }
    for(int i = n; i >= 1; i--){
         for(int j = 0; j < i; j++){
             cout << "*";
         }
         for(int j = 0; j < 2*(n-i); j++){
             cout << " ";
         }
         for(int j = 0; j < i; j++){
             cout << "*";
         }
         cout << endl;
    }
    
    return 0;
}
// Input : 
//        n = 5
// Output : 
//        *        *
//        **      **
//        ***    ***
//        ****  ****
//        **********
//        **********
//        ****  ****
//        ***    ***
//        **      **
//        *        *