#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t; 

    while(t--){
        int a,b; cin>>a,b;
        vector<int> temp(a);
        for(int i=0; i<a; i++){
            cin>>temp.at(i);
        }
        int i=0;
        int count=0;
        sort(temp.begin(),temp.end());
        while(!temp.empty()){
            int ref = temp.at(i);

            if(*temp.begin()<=b){
                break;
            }
            for(int j=i+1; j<temp.size(); j++){
                if(ref+temp.at(j)==b){
                    temp.erase(temp.begin()+j);
                    count++;
                }
                else{
                    
                }
            }
        }
    }
    return 0;
}