#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>store;
    int t=4;
    int ref;
    while(t--){
        cin>>ref;
        store.push_back(ref);
    }
    sort(store.begin(),store.end());
    int max=*(store.end()-1);

    for(auto i:store){
        if(i!=max)
        cout<<max-i<< " ";
    }
}