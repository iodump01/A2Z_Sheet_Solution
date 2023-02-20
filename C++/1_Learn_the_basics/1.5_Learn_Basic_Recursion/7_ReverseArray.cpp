#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i,int a[],int n)
{
    if(i>=n){
        return;
    }
    swap(a[i],a[n]);
    reverseArray(i+1,a,n - 1);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)cin>>a[i];
    reverseArray(0,a,n - 1);

    for(int i=0;i<n;i++)cout<<a[i]<<" ";

    return 0;
}
// Input
// 6
// 2 4 5 5 7 8
// Output
// 8 7 5 5 4 2  
