#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {
    int a,b,c;cin>>a>>b;
    int maxm = max(a,b);

    int ref=(6-maxm)+1;
    cout<<ref/gcd(6,ref)<<'/'<<6/gcd(6,ref);
    
    return 0;
}