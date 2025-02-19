#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t; 
    vector<string> ans; 
    while(t--){
        string str; 
        cin>>str; 
        int left=0, right=0;
        int len=str.size();
        for(int i=0; i<3; i++){
            left+=(str.at(i)-'0');
            right+=(str.at(len-1-i)-'0');
        }
        if(right==left){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for(auto i:ans){
        cout<<i<<endl;
    }
}