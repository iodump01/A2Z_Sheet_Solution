// https://bit.ly/3ppA6YJ

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    //code here
    for(int i = 1; i < n;i++){
        int temp = i;
        int j = i-1;
        while(j>=0){
            if(arr[temp] < arr[j]){
                swap(arr[temp],arr[j]);
                temp--;
                j--;
            }
            else{
                break;
            }

        }
    }
}

int main(){
    int arr[] = {7,33,54,37,45,73,54,2,334,65,4,77,56};

    cout << "Unsorted Array: ";
    for(auto i: arr){
        cout << i << " ";
    }
    cout << endl;

    insertionSort(arr,sizeof(arr)/sizeof(arr[0]));

    cout << "Sorted Array: ";
    for(auto i: arr){
        cout << i << " ";
    }
}

// Unsorted Array: 7 33 54 37 45 73 54 2 334 65 4 77 56 
// Sorted Array: 2 4 7 33 37 45 54 54 56 65 73 77 334 