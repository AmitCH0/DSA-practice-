#include<bits/stdc++.h>
using namespace std;
bool binarySearchRecur(int arr[],int s,int e,int k){
    if(s>e)
        return false;
    int mid=(s+e)/2;
    if(arr[mid] == k)
        return true;
    if(arr[mid] > k)
        return binarySearchRecur(arr,mid+1,e,k);
    else
        return binarySearchRecur(arr,s,mid-1,k);
}
int main(){
    int arr[]={1,2,6,10,17,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    cout<<"Present or Not (0/1) ---> "<<binarySearchRecur(arr,0,5,k)<<endl;
}