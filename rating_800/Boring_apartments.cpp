#include<bits/stdc++.h>
using namespace std; 
int sum(int n){
    int sum=0;
    for(int i=1;i<=n; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int t; cin>>t; 
    while(t--){
        int n; cin>>n;
        int count =0;
        int rem=n%10;

        while(n>0){
            n/=10;
            count++;
        }
        int ans=sum(4)*(rem-1) + sum(count);
        cout<<ans<<endl;
    }
}