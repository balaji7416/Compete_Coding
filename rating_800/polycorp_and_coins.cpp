#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t; 

    while(t--){
        int n; cin>>n;
        int a,b; a=b=n/3;
        if(n%3==1) a++;
        else if(n%3==2) b++;

        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
