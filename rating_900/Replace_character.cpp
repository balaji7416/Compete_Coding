#include<bits/stdc++.h>
using namespace std; 

int main(){

    int t ; cin>>t; 

    while(t--){
        int n; cin>>n; 
        string s; cin>>s; 

        int freq[26]={0};
        for(auto i: s){
            freq[i-'a']++;
        }

        int max_freq=0,max_index=0,min_freq=INT_MAX,min_index=-1;
        for(int i=0; i<26; i++){

            if(freq[i]>=max_freq){
                max_freq=freq[i];
                max_index=i;
            }
            if(freq[i]>0 && freq[i]<min_freq){
                min_freq=freq[i];
                min_index=i;
            }
        }

        char maxm=max_index + 'a';
        char minm=min_index + 'a';
        for(auto &i: s){

            if(i==minm){
                i=maxm;
                break;
            }
        }

        cout<<s<<endl;
    }
}