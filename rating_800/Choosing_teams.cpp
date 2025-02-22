#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n, k; cin>>n>>k;
    vector<int> store(n);
    for(int i=0; i<n; i++){
        cin>>store.at(i);
    }
    int count=0;
    for(auto i:store){
        if(5-i>=k) count+=1;
    }
    cout<<count/3;

}