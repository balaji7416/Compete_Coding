#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t; 
    while(t--){
        string s; cin>>s;
        string ref="codeforces";
        int count=0;
        for(int i=0; i<s.size(); i++){
            if(s.at(i) != ref.at(i)) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}