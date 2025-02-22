#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t; 
    cin.ignore();
    vector<string> ans;
    while(t--){
        string s;
        getline(cin,s);
        int ref=0; 
        while(s.at(ref)!=' '){
            ref++;
        }
        char temp;
        temp=s.at(0);
        s.at(0)=s.at(ref+1);
        s.at(ref+1)=temp;
        ans.push_back(s);
    }

    for(auto i: ans){
        cout<<i<<endl;
    }
    return 0;
}