#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t; 
    int a,b,c; 
    vector<char> ans;

    while(t--){
        cin>>a>>b>>c;
        if(a+b==c){
            ans.push_back('+');
        }
        else{
            ans.push_back('-');
        }
    }

    for(auto i: ans){
        cout<<i<<endl;
    }
}