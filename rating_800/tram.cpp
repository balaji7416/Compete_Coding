#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b; cin>>n;
    vector<int> exit;
    vector<int> enter;
    

    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(i==n-1){
            b=0;
        }
        exit.push_back(a);
        enter.push_back(b);
        
    }
    int max=0,ref=0;
    for(int i=0; i<exit.size(); i++){

       ref += enter.at(i)-exit.at(i);
       if(ref>max){
        max=ref;
       }
    }

    cout<<max;

}