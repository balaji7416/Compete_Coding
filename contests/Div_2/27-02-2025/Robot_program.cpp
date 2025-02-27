#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t; 

    while(t--){
        long long n,x,k; cin>>n>>x>>k;
        string s; cin>>s;

        long long needed = 0-x;
        long long ans=0;
        long long left=0 , right =0 , res;
            
            for(auto  i : s){
                if(i=='L') left++;
                else if(i=='R') right++;

                res=right-left;
                k--;
                if(res==needed){
                    ans++;
                    break;
                }
            }

            long long r_count=0, l_count=0, req_len=0;
            bool flag=false;
            if(res==needed){
            for(auto i: s){
                req_len++;
                if(i=='L'){
                    l_count++;
                }
                else if(i=='R'){
                    r_count++;
                }
                if(r_count==l_count){
                    flag=true;
                    break;
                }
            }
            if(flag)
            ans+=k/req_len;
        }

        cout<<ans<<endl; 
    }
    return 0;
}