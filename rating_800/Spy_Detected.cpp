#include<bits/stdc++.h>
using namespace std; 

int main(){

    int t; cin>>t; 
    vector<int> temp;
    vector<int> ans; 
    int ref,len; 

    while(t--){
        cin>>len;
        for(int i=0; i<len; i++){
            cin>>ref; 
            temp.push_back(ref);
        }

        int count = 0; 
        ref = temp.at(0);

       for(int i=1; i<len; i++){
        if(temp.at(i)==ref){
            count++;
            break;
        }
       }

       if(count==0){
        ans.push_back(1);
       }
       else{
        int pos;
        for(int i=0; i<len; i++){
            if(temp.at(i) != ref){
               pos=i;
               break; 
            }
        }
        ans.push_back(pos+1);
       }
        
        temp.clear();
        
        
    }

    for(auto i: ans){
        cout<<i<<endl;
    }

}