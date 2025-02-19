#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t;

    vector<string>  ans; 
    set<int> temp;
    int ref; int len;
    while(t--){
        cin>>len;
        for(int i=0; i<len; i++){
            cin>>ref; 
            temp.insert(ref);
        }

        bool pos=true; 

        for(auto  i=prev(temp.end());i!=temp.begin(); i--){
            if(*i-*(prev(i)) !=1 ){
                pos=false;
                break;
            }
        }

        if(pos) ans.push_back("YES");
        else ans.push_back("NO");

        temp.clear();

    }

    for(auto i: ans){
        cout<<i<<endl;
    }
}