#include<bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c,d; cin>>a>>b>>c>>d;
    string s; cin>>s;
    int sum=0;
    for(auto i:s){
        if(i=='1'){
            sum+=a;
        }
        if(i=='2'){
            sum+=b;
        }
        if(i=='3'){
            sum+=c;
        }
        if(i=='4'){
            sum+=d;
        }
    }
    cout<<sum<<endl;
    return 0;
}