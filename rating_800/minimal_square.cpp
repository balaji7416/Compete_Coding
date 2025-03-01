#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t; 

   while(t--){
    int a,b; cin>>a>>b;
    int ans; 
    int maxm=max(a,b);
    int minm=a+b-maxm;

    if(2*minm<maxm) ans=maxm*maxm;
    else ans=4*minm*minm;

    cout<<ans<<endl;
   }
    return 0;
}