#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    vector<int> pres;
    vector<int> pres2(n,0);
    int ref;
    for(int i=0; i<n; i++){
        cin>>ref;
        pres.push_back(ref);
    }
    for(int i=0; i<pres.size(); i++){
        pres2.at(pres.at(i)-1) = i+1;
    }

    for(auto i:pres2){
        cout<<i<<' ';
    }


}