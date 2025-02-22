#include<bits/stdc++.h>
using namespace std; 

int main(){

    int t; cin>>t; 
    vector<int> ans;
    int a,b,c;
    while(t--){
        vector<int> temp(3);
        for(auto i=0; i<temp.size(); i++){
            cin>>temp.at(i);
        }
        int count=0;
        for(auto i=1; i<temp.size(); i++){
            if(temp.at(i)==temp.at(0)){
                count++;
                break;
            }
        }

        if(count==0){
            ans.push_back(temp.at(0));
        }
        else{
            for(auto i=1; i<temp.size();i++){
                if(temp.at(i)!=temp.at(0)){
                    ans.push_back(temp.at(i));
                    break;
                }
            }
        }
    }

    for(auto i: ans){
        cout<<i<<endl;
    }

    return 0;
}