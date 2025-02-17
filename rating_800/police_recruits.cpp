#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; cin>>t;
    int police=0;
    vector<int> seq(t);
    int crimes=0;

    for(int i=0; i<t; i++){
        cin>>seq.at(i);
    }
    for(auto i:seq){
        if(i>0){
            police+=i;
        }
        if(i==-1 && police<1){
            crimes++;
        }
        if(i==-1 && police>=1){
            police-- ; 
        }
    }
    cout<<crimes;
}