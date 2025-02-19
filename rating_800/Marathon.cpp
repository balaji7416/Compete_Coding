#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t; 
    vector<int>temp;
    vector<int> ans; 
    int ref; 
    while(t--){
        for(int i=0; i<4; i++){
            cin>>ref; 
            temp.push_back(ref);
        }
        int me = temp.at(0);
        int count =0;
        for(auto i: temp){
            if(i>me) count++;
        }

        ans.push_back(count);
        temp.clear();


    }
    for(auto i: ans){
        cout<<i<<endl;
    }

}