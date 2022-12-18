// https://bit.ly/3Ap9U6F

#include<bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n) {
        // code here
        bool v1 = true;
        
        for(int i = 1; i < n; i++){
            if(arr[i-1] > arr[i]) v1 = false;
        }
        
        return v1;
    }

int main(){
    int arr[] = {2,4,7,33,37,45,54,54,56,65,73,77,334};
    cout << arraySortedOrNot(arr, sizeof(arr)/sizeof(arr[0]));
}

// Input
// 2 4 7 33 37 45 54 54 56 65 73 77 334
// Output
// 1