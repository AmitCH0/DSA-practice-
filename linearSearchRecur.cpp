#include<bits/stdc++.h>
using namespace std;
bool linearS(int a[],int n,int k){
    if(n==0)
        return false;
    else if(a[0] == k)
        return true;
    else 
        return linearS(a+1,n-1,k);
}
int main(){
    int arr[]={3,6,4,36,45,63};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=5;
    bool ans=linearS(arr,n,k);
    //cout<<"The key is present in the Array(True[1]/False[0]) : "<<ans<<endl;
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
}