#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t; 

    while(t--){
        int l; cin>>l;
        string s; cin>>s;
        if(l!=5){
            cout<<"NO"<<endl;
            continue;
        }
        string ref="Timur";
        sort(ref.begin(),ref.end());
        sort(s.begin(),s.end());
        if(s==ref){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}