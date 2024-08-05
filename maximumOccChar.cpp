#include<bits/stdc++.h>
using namespace  std;
char maxOccurence(string s){
    int temp[26]={0};
    for(int i=0;i<s.length();i++){
        int num=0;
        if(s[i]>='a' && s[i]<='z'){
            num=s[i]-'a';
        }
        else {
            num=s[i]-'A';
        }
        temp[num]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(temp[i]>maxi){
            ans=i;
            maxi=temp[i];
        }
    }

    char finalAns='a'+ans;
    return finalAns;
}
int main(){
    string st;
    cout<<"Enter a string : ";
    cin>>st;
    cout<<maxOccurence(st);
}