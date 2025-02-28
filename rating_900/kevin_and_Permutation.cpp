#include<bits/stdc++.h>
using namespace std; 

int main(){

    int t; cin>>t; 

    while(t--){
        vector<int> temp; 
        int n,k; cin>>n>>k;
        int inp;
        int ref=k ,  count=1 ,  tcount=n/k+1;
        
        while(temp.size()!=n){
                ref--;
                if(ref==0){
                    temp.push_back(count);
                    count++;
                    ref=k; 
                }
                else{
                    temp.push_back(tcount);
                    tcount++;
                }
            }

            for(auto i: temp){
                cout<<i<<" ";
            }
            cout<<endl;
        }

        return 0; 
    }
   

