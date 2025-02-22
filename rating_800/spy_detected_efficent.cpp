#include<bits/stdc++.h>
using namespace std; 

int main(){

    int t; cin>>t; 
    vector<int> ans;
    while(t--){
        int len;cin>>len;
        vector<int> temp(len);
        for(auto i=0; i<len; i++){
            cin>>temp.at(i);
        }
        
        unordered_map<int,int> map;
        for(auto i: temp){
            map[i]++;
        }
        for(auto i: map){
            if(i.second ==1){
                ans.push_back(i.first);
            }
        }
    }

    for(auto i: ans){
        cout<<i<<endl;
    }

    return 0;
}