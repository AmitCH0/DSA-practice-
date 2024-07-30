#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s,int i,int j){
    if(i>j)
        return true;
    if(s[i] != s[j])
        return false;
    else 
        return palindrome(s,i+1,j-1);
}
int main(){
    string str="abbbga";
    int isPalindrome=palindrome(str,0,str.length()-1);
    if(isPalindrome){
        cout<<"it is a Palindrome"<<endl;
    }
    else{
         cout<<"it is not a Palindrome"<<endl;
    }
}