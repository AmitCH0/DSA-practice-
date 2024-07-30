#include<bits/stdc++.h>
using namespace std;
int knapsackDP(int w[],int v[],int C,int n){
    if(w==0 || n==0)
        return 0;
    if(w[n-1]<C){
        return max(v[n-1]+knapsackDP(w,v,C-w[n-1],n-1),knapsackDP(w,v,C,n-1));
    }
    else{
        return knapsackDP(w,v,C,n-1);
    }
}
int main(){
    int v[]={3,4,1,2,6};
    int w[]={2,4,3,5,5};
    int C=12;
    int n=5;
    cout<<"Maximum value for given capacity : "<<knapsackDP(w,v,C,n);
}
