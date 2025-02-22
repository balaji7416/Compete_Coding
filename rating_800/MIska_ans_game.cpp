#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t; 
    int p1=0, p2=0;
    while(t--){
        int a,b; cin>>a>>b;
        if(a>b) p1++;
        else if(a<b) p2++;
    }
    if(p1>p2){
        cout<<"Mishka"<<endl;
    }
    else if(p2>p1){
        cout<<"Chris"<<endl;
    }
    else {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}