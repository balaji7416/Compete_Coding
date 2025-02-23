#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t; 
    while(t--){
        int l ; cin>>l;
        string s; cin>>s; 
        int freq[26]={0};
        int sum=0; 
        for(auto i: s){
            freq[i-'A']++;
        }
        for(auto i: freq){
            if(i>=1){
                sum+=1*2 + (i-1)*1;
            } 
        }
        cout<<sum<<endl;

    }
    return 0;
}