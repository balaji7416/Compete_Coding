#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t; 

    while(t--){
        int l; cin>>l;
        string s; cin>>s; 
        string ref ="";
        bool flag=true;
        int i=0;
        while(i<s.size()){
            char temp=s.at(i);
            ref+=temp;
            while(i<s.size()&& s.at(i)==temp){
                i++;
            }
        }
        int freq[26]={0};
        for(auto i:ref){
            freq[i-'A']++ ;
        }
        for(auto i: freq){
            if(i>=2){
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}