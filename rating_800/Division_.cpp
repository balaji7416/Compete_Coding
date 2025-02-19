#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t; 
    int ref; 
    vector<string> ans; 

    while(t--){
        cin>>ref; 

        if(ref>=1900)
        ans.push_back("Division 1");

        else if(ref>=1600)
        ans.push_back("Division 2");

        else if(ref>=1400)
        ans.push_back("Division 3");

        else
        ans.push_back("Division 4");
    }

    for(auto i: ans){
        cout<<i<<endl;
    }

    
}