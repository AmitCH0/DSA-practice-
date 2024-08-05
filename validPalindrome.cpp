#include<bits/stdc++.h>
using namespace  std;
bool valid(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') | (ch>='0' && ch<='9')){
        return 1;
    }
    else return 0;
}
char toLowerC(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='1')){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
}
bool check(string a){
    int s=0;
    int e=a.length()-1;

    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
bool isPalindrome(string st){
    string temp;
    //remove special char
    for(int i=0;i<st.length();i++){
        if(valid(st[i])){
            temp.push_back(st[i]);
        }
    }
    //convert all upper to lower
    for(int i=0;i<temp.length();i++){
        temp[i]=toLowerC(temp[i]);
    }
    return check(temp);
}
int main(){
    string st="abbca";
    if(isPalindrome(st)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
}