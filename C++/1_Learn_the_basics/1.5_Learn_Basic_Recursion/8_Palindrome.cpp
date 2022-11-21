// https://bit.ly/3w2G4T5

#include<bits/stdc++.h>
using namespace std;

int helper(string& s, int i){
    int bi = s.size()-i-1;
    if(i == bi || i > bi) return 1;
    int ans = 0;
    if(s[i] == s[bi]) ans = 1;
    return ans & helper(s,i+1);
}

int isPalindrome(string S)
{
    // Your code goes here
    return helper(S,0);
}

int main(){
    
    string s = "racecar";
    cout << isPalindrome(s);
}

// Input
// racecar
// Output
// 1