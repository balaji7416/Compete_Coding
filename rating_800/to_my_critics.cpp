#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t; 
    vector<string> ans;

    while(t--){
      int a,b,c;cin>>a>>b>>c;
      bool flag=false;
      if(a+b>=10 || b+c>=10 || c+a>=10){
        flag=true;
      } 
        flag?ans.push_back("YES"):ans.push_back("NO");
    }

    for(auto i:ans){
        cout<<i<<endl;
    }
    return 0;
}