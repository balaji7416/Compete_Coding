#include<bits/stdc++.h>
using namespace std; 

bool is_contain_3_end(int n){
    string str=to_string(n);
    if(str.back()=='3') return true;
    else return false;
}
int main(){

    int t; cin>>t;
    vector<int>ans; 

    while(t--){
        int k; cin>>k;
        int count=k; 
        int ref=0; 
        for(int i=0; i<count; i++){
            ref++;
            while(ref%3==0 || is_contain_3_end(ref)){
                ref++;
            }
        }
        ans.push_back(ref);
    }
    for(auto i:ans){
        cout<<i<<endl;
    }

    return 0; 
}