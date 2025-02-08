#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    // str.at(0) = toupper(str.at(0));
    // cout<<str;

    if(str.at(0)>=97 && str.at(0)<=122){
        str.at(0) = str.at(0) - 32;
    }
    
     cout<<str;
}