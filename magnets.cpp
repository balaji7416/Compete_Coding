#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    string ref;

    vector<string> mag;

    for(int i=0; i<n; i++){
        cin>>ref;
        mag.push_back(ref);
    }

    int groups=0;

    for(int i=0; i<mag.size() -1 ; i++){
        if((mag.at(i)).at(1) == (mag.at(i+1)).at(0)){
            groups++;
        }
    }
    groups++;

    

    cout<<groups;
    

}