#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t; 

    while(t--){
        string s;cin>>s;
        int l=s.size();
        bool flag = true;

        if(s.size()&1){
            flag=false;
        }
        else{
        for(int i=0; i<l/2; i++){
            if(s.at(i) != s.at(l/2 + i)){
                flag=false;
                break;
            }
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}