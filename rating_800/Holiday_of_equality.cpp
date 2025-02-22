#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t; 
    vector<int> store(t);

    for(int i=0; i<t; i++){
        cin>>store.at(i);
    }

    int maxm=*max_element(store.begin(),store.end()); //max_element function return address of max element;
    int ans=0; 
    for(auto i:store){
        ans+=maxm-i;
    }

    cout<<ans;
}