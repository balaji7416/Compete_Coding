#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    vector<int> store(t);
    for(int i=0; i<t; i++){
        cin>>store.at(i);
    }
    int count=0;
    int minm,maxm;
    minm=maxm=store.at(0);
    for(auto i: store){
        if(i>maxm){
            maxm=i;
            count++;
        }
        else if(i<minm){
            minm=i;
            count++;
        }
    }
    cout<<count;
}