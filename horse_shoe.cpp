#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> shoes;
    int n; 
    for(int i=0; i<4; i++){
        cin>>n;
        shoes.push_back(n);
    }
    set<int> uniq;
    for(auto i: shoes){
        uniq.insert(i);
    }
    cout<<4-uniq.size() ;

}