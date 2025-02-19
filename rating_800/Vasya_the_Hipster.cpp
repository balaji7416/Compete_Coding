#include<bits/stdc++.h>
using namespace std; 

int main(){

    int a,b; cin>>a>>b;

    int sum = a+b;
    a=max(a,b);
    b=sum-a;
    int ans1=0,ans2=0;

    while(b>0){
        ans1++;
        b--;
        a--;
    }
    ans2=a/2;
    cout<<ans1<<' '<<ans2;
}

