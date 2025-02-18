#include<bits/stdc++.h>
using namespace std;
int minm(int a, int b, int c){
    int min=a; 
    
    if(b<min) min=b;
    if(c<min) min=c;

    return min;
}
int main(){

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    // int juice = l*k;
    // int salt = p;
    int limes = c*d;
    int salt = p/np;
    int juice = l*k/nl;
    int ans = minm(limes,salt,juice)/n;

    cout<<ans;

}