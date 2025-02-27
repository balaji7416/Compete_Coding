#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int t; cin>>t; 

    while(t--){

        int a,b; cin>>a>>b;
        vector<int> temp(a);
        for(int i=0; i<a; i++){
            cin>>temp.at(i);
        }
        map<int,int> freq;
        int count=0;

        for(auto i: temp){
            int ref=b-i;
            if(freq[ref]>0){
                count++;
                freq[ref]--;
            }
            
            else{
                freq[i]++;
            }
        }


        cout<<count<<endl;
        
}

return 0;
}