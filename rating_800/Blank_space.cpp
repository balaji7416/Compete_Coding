#include<bits/stdc++.h>
using namespace std; 

int main(){

    int t; cin>>t; 
    while(t--){
        int n; cin>>n ;
        vector<int> temp(n);
        for(int i=0; i<n; i++){
            cin>>temp.at(i);
        }
        int max_space=0;
        for(int i=0; i<n; i++){

            if(temp.at(i)==0){
                int temp_max=0;
                for(int j=i; j<n and temp.at(j)==0; j++){
                    temp_max++;
                }
                if(temp_max > max_space) max_space=temp_max;

            }
        }

        cout<<max_space<<endl;
    }
    return 0;
}