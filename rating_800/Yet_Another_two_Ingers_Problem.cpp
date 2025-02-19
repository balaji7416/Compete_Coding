#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t; cin>>t;
    vector<int> ans; 
     
    int ref; 

    while(t--){
        int a , b; 
        cin>>a>>b;
        
        if(a==b){
            ref=0;
        }
        else{
            int rem = abs(a-b)%10;
            if(rem==0)
            ref = abs(a-b)/10;

            else
            ref = abs(a-b)/10 +1;

        }

       

        ans.push_back(ref);
    }

    for(auto i: ans){
        cout<<i<<endl;
    }
}