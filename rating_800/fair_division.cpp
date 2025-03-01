#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t; cin>>t; 

    while(t--){
      
        int n; cin>>n ;
        vector<int> temp(n);
        for(int i=0; i<n; i++){
            cin>>temp.at(i);
        }
        int count1=0 , count2=0; 
        for(auto i: temp){
            if(i==1) count1++;
            else count2++;
        }

        if(count1%2 != 0){
            cout<<"NO"<<endl;
        }
        else{
            if(count2%2 != 0 and count1==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
    }
    return 0;
}