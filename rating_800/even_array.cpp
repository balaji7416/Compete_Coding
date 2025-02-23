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
        int ecount=0;
        for(auto i:temp){
            if(i%2==0){
                ecount++;
            }
        }
        if(ecount != n-(n/2)){
            cout<<-1<<endl;
            continue;
        }
        else{
            int ref=0;
            for(int i=0; i<temp.size();i++){
                if((i%2==0 && temp.at(i)%2==0) || (i&1 && temp.at(i)&1)){
                    ref++;
                }
            }
            cout<<(n-ref)/2<<endl;
        }
    }
    return 0;
}