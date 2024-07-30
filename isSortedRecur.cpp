#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int n){
    if(n==0 || n==1)
        return true;
    else if(arr[0] > arr[1])
        return false;
    else
        return isSorted(arr+1,n-1);
}

int main(){
    int arr[]={1,3,4,9,15,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    bool ans=isSorted(arr,size);
    cout<<"the Array is sorted(True/False) : "<<ans<<endl;
    return 0;
}