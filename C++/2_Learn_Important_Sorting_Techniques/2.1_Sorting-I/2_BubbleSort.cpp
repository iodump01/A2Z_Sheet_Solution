// https://bit.ly/3w6yQx8

#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Your code here  
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {3,7,4,5,2};

    cout << "Unsorted Array: ";
    for(auto i: arr){
        cout << i << " ";
    }
    cout << endl;

    bubbleSort(arr,sizeof(arr)/sizeof(arr[0]));

    cout << "Sorted Array: ";
    for(auto i: arr){
        cout << i << " ";
    }
}

// Unsorted Array: 3 7 4 5 2 
// Sorted Array: 2 3 4 5 7