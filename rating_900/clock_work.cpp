#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; cin>>t; 
    while(t--){
        int n; cin>>n; 
        vector<int> temp(n);
        for(auto i=0; i<temp.size(); i++){
            cin>>temp.at(i);
        }
        bool flag = true;
        vector<int> ref(n);
        if(n&1){

        for(int i=0; i<=n/2; i++){
            ref.at(i)=ref.at(n-1-i)=(n-i-1)*2;
        }
    }
       else{
        for(int i=0; i<n/2; i++){
            ref.at(i)=ref.at(n-1-i)=(n-i-1)*2;
        }
       }
        for(int i=0; i<n; i++){
            if(temp.at(i)<=ref.at(i)){
                flag=false; 
                break;
            }

        }

        cout<<(flag?"YES":"NO")<<endl;

    }
}