#include<bits/stdc++.h>
using namespace std;
void sortArr(int arr[],int n){
    if(n==0 || n==1)
        return;
    for(int i=0; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sortArr(arr,n-1);
}
int main(){
    int arr[]={6,4,9,13,1,105};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortArr(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}