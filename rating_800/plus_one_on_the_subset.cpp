#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin>>t;

    while(t--){

        int l; cin>>l;
        vector<int> temp(l);
        for(int i=0; i<l; i++){
            cin>>temp.at(i);
        }
        int minm=temp.at(0);
        int maxm=temp.at(0);
        for(auto i: temp){
            if(i>maxm) maxm=i;
            else if(i<minm) minm=i;
        }

        cout<<maxm-minm<<endl;
}
return 0;

}