#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    int finaldec=0;
    vector<int> ans;

    int resp;
    for(int i=0; i<n; i++){
        cin>>resp;
        ans.push_back(resp);
    }
    for(auto i: ans){
        if(i==1){
            finaldec=1;
            break;
        }
    }

    if(finaldec==0){
        cout<<"EASY";
    }
    else{
        cout<<"HARD";
    }
}