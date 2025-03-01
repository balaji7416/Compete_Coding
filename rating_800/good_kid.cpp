#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 
        int ref;
        multiset<int> sett;
        for(auto i=0; i<n; i++){
            cin>>ref; 
            sett.insert(ref);
        }
        auto it=sett.begin();
        int temp = *it; 
        sett.erase(it);
        sett.insert(temp+1);
        long long prod=1; 
        for(auto i: sett){
            prod*=i;
        }
        cout<<prod<<endl;
    }
    return 0;
}