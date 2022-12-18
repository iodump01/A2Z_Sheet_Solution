// https://bit.ly/3Pld280

#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr, int n)
{
    int max = arr[0];
    for(int i = 0; i < n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    vector<int> arr = {3,7,4,5,2,4,8,9};
    cout << largest(arr,arr.size());
}

// Input
// 3,7,4,5,2,4,8,9
// Output
// 9