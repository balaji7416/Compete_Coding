#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t; 
    vector<string> ans;

    while(t--){
        string s; cin>>s;
        string sol="";
        sol+=s.front();
        for(int i=1; i<s.size()-1; i++){
            sol+=s.at(i);
            i++;
        }
        sol+=s.back();
        ans.push_back(sol);
    }

    for(auto i: ans){
        cout<<i<<endl;
    }
    return 0;
}