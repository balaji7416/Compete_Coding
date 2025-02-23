#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t; 
    while(t--){
     
        int a , b ; cin>>a>>b;
        int current=a*60 + b;
        int ans=24*60 - current; 
        cout<<ans<<endl;

    }
    return 0;
}