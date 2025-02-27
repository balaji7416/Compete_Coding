#include<bits/stdc++.h>
using namespace std;

int main() {
    
    long long t; cin>>t; 

    while(t--){
        long long n; cin>>n;
        
        long long ref = n/15; 
        long long rem = n%15;
        long long ans=0;

        if(ref>=1){
            ans+=ref;
            ans+=(ref-1)*2;

            if(rem>=2){
                ans+=2;
            }
            else{
                ans+=rem;
            }
        }
       
        
        if(n<3){
            ans+=n+1;
        }
        else{
            ans+=3;
        }
        cout<<ans<<endl;
    }
    return 0;
}