// https://bit.ly/3ppA6YJ

#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
    {
       //code here
       for(int i = 0; i < n; i++){
           int mi = i;
           for(int j = i+1; j < n; j++){
               if(arr[j] < arr[mi]){
                   mi = j;
               }
           }
           swap(arr[mi],arr[i]);
       }
    }

int main(){
    int arr[] = {3,7,4,5,2,4,8,9};

    cout << "Unsorted Array: ";
    for(auto i: arr){
        cout << i << " ";
    }
    cout << endl;

    selectionSort(arr,sizeof(arr)/sizeof(arr[0]));

    cout << "Sorted Array: ";
    for(auto i: arr){
        cout << i << " ";
    }
}

// Unsorted Array: 3 7 4 5 2 4 8 9 
// Sorted Array: 2 3 4 4 5 7 8 9 