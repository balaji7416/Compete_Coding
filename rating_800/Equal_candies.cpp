#include<bits/stdc++.h>

using namespace std;

int main() {
    int t ; cin>>t; 
    while(t--){
        int n; cin>>n; 

        vector<int> temp(n);
        for(int i=0; i<n; i++){
            cin>>temp.at(i);
        }
        int ref = *min_element(temp.begin(),temp.end());
        int sum=0;
        for(auto i: temp){
            sum+=i-ref;
        }
        cout<<sum<<endl;
    }
    return 0;
}