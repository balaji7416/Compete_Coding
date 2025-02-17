#include<bits/stdc++.h>
using namespace std;  

int main(){
    int t; cin>>t;
    vector<int> num(t); 

    for(int i=0; i<t; i++){
        cin>>num.at(i);
    }
    for(auto i:num){
        int ans = i-(i/2)-1;
        cout<<ans<<endl;
    }
}