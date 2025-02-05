#include <bits/stdc++.h>
using namespace std;
int main(){

    int k,n,w; cin>>k>>n>>w;

    int total=0;
    for(int i=1; i<=w; i++){
        total+=i*k;
    }
    int extra;
    if(n<total){
        extra = total-n;
    }
    else{
        extra =0;
    }
    cout<<extra;

    return 0;
}
