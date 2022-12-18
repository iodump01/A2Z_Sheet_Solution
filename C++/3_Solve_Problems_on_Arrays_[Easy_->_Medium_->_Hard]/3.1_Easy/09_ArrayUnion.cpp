// https://bit.ly/3Ap7Onp

#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i = 0,j = 0;
        vector<int> v;
        while(i < n && j < m){
            if(arr1[i] < arr2[j]){
                if(v.size() == 0 || v.back() != arr1[i]){
                    v.push_back(arr1[i]);
                }
                i++;
            }else{
                if(v.size() == 0 || v.back() != arr2[j]){
                    v.push_back(arr2[j]);
                }
                j++;
            }
        }

        while(i < n){
            if(v.back() != arr1[i]){
                v.push_back(arr1[i]);
            }
            i++;
        }
        while(j < m){
            while(v.back() != arr2[j]){
                v.push_back(arr2[j]);
            }
            j++;
        }
        
        
        return v;
        
    }

int main(){
    int arr1[] = {1,4,5,6,6};
    int arr2[] = {1,1,1,2,2,3};
    for(int i : findUnion(arr1,arr2,sizeof(arr1)/sizeof(arr1[0]),sizeof(arr2)/sizeof(arr2[0]))){
        cout << i << " ";
    }
}

// Input
// 1 4 5 6 6
// 1 1 1 2 2 3 
// Output
// 1 2 3 4 5 6