#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t; 

    while(t--){

        string s; cin>>s ;
        int a_count=0;
        for(auto i: s){
            if(i=='A') a_count++;
        }
        if(a_count>2) cout<<"A"<<endl;
        else cout<<"B"<<endl;

    }
    return 0;
}