#include<bits/stdc++.h>

using namespace std;

int main() {

    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        vector<int> temp(n);
        for(int i=0; i<n; i++){
            cin>>temp.at(i);
        }
        int sum=0; 
        for(auto i: temp){
            sum+=i;
        }
        if(sum%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}