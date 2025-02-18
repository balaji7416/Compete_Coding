#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;  cin>>t;
    string ref;

    vector<string> store;
    while(t--){
        cin>>ref;
        store.push_back(ref);
    }
    for(auto &i: store){
        transform(i.begin(),i.end(),i.begin(), ::tolower);

    }
    for(auto i: store){
        if(i =="yes")
        cout<<"YES"<<endl;

        else
        cout<<"NO"<<endl;
    }
}