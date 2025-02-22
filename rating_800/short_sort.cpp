#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t; 
    vector<string> ans;
    
    while(t--){
        string s; cin>>s;
        if(s.front()=='a'||s.back()=='c'||s.at(1)=='b'){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }

    for(auto i: ans){
        cout<<i<<endl;
    }
    return 0;
}