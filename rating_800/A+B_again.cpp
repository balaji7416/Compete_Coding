#include<bits/stdc++.h>
using namespace std; 

int sum_digits(int n){
    string str=to_string(n);
    int sum=0; 
    for(auto i:str){
        sum+=i-'0';
    }
    return sum;
}

int main(){

    int t; cin>>t; 
    vector<int> ans;

    while(t--){
        int n; cin>>n;
        ans.push_back(sum_digits(n));
    }

    for(auto i: ans){
        cout<<i<<endl;
    }
    return 0;
}