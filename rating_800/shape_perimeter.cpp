#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t;
    vector<int> answ;
    while(t--){
    int n,m; cin>>n>>m;
    int total_peri= n*(4*m);
    vector<vector<int>> coord(n,vector<int>(2));
    for(int i=0; i<n; i++){
        cin>>coord.at(i).at(0);
        cin>>coord.at(i).at(1);
    }
    int extra =0; 
    for(int i=0; i<n-1; i++){
        extra += 2*((m-coord.at(i+1).at(0))+(m-coord.at(i+1).at(1)));
    }
    int ans = total_peri - extra;

    answ.push_back(ans);
}
for(auto i: answ){
    cout<<i<<endl;
}
}