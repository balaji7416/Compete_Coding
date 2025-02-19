#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; 
    vector<int> temp;
    vector<int> ans;
    int ref;
    while(t--){
        for(int i=0; i<3; i++){
            cin>>ref;
            temp.push_back(ref);
        }
        sort(temp.begin(),temp.end());
        ans.push_back(temp.at(1));
        temp.clear();
    }
    for(auto i: ans){
        cout<<i<<endl;
    }

}