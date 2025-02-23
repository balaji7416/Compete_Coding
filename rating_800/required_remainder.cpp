#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; cin>>t; 
    while(t--){
    
        long long x,y,k;cin>>x>>y>>k;
        if(y>x){
            cout<<"not possible"<<endl;
            continue;
        }
        long long ref = k-(k%x)+y;
        if(ref>k){
            ref-=x;
        }
        cout<<ref<<endl;


    }

}