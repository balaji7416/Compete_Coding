#include<bits/stdc++.h>
using namespace std; 

string zero(int n){
   string ref="";
    for(int i=0; i<n; i++){
        ref+="0";
    }
    return ref;
}

int main(){
    int t; cin>>t;
    vector<vector<string>> store;
    while(t--){
        string num; cin>>num;
        vector<string> temp;
        for(int i=0; i<num.size(); i++){
            string ref = "";
            ref=ref+num.at(i)+zero(num.size()-i-1);
            if(stoi(ref) != 0){
                temp.push_back(ref);
            }
        }
        store.push_back(temp);

    }

    for(auto i: store){
        cout<<i.size()<<endl;
        for(auto j: i){
            
            cout<<j<< " ";
        }
        cout<<endl;

    }
}