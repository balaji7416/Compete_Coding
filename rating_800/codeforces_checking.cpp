#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;cin>>t; 
    char c;
    vector<string>ans;
    string ref = "codeforces";
    while(t--){
        cin>>c;
        bool flag = false;
        for(auto i: ref){
            if(i==c){
                flag = true;
                break;
            }
        }

        if(flag){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }

    for(auto i: ans){
        cout<<i<<endl; 
    }
}