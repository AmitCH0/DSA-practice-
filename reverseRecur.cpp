#include<bits/stdc++.h>
using namespace std;
void reverse(string& s,int i,int j){        //& call by reference(passing address)
    if(i>j)
        return;
    swap(s[i], s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
int main(){
    // string name="Amit";
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    reverse(str,0,str.length()-1);
    cout<<str<<endl;
}