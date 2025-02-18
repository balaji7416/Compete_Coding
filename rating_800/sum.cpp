#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    vector<string> ans;
    vector<int> temp;
    int ref;
    while(t--){
       
        for(int i=0; i<3; i++){
            cin>>ref;
            temp.push_back(ref);
        }
        auto  minm = min_element(temp.begin(),temp.end());
        auto  maxm = max_element(temp.begin(),temp.end());
        int other = accumulate(temp.begin(),temp.end(),0)-(*minm + *maxm);

        if(*minm + other != *maxm)
        ans.push_back("NO");

        else
        ans.push_back("YES");

        temp.clear();

    }
    for(auto i:ans){
        cout<<i<<endl;
    }
}