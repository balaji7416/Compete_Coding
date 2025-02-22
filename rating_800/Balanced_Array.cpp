#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        vector<int> temp;
        if((n/2)%2 !=0){
            cout<<"NO"<<endl;
        }

        else{
            for(int i=2; i<=n; i+=2){
                temp.push_back(i);
            }
            for(int i=0; i<n/4; i++){
                temp.push_back(temp.at(i)-1);
            }
            for(int i=n/4; i<n/2;i++){
                temp.push_back(temp.at(i)+1);
            }

            cout<<"YES"<<endl;
            for(auto i:temp){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}