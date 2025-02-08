#include<bits/stdc++.h>
using namespace std;

int main(){

    int pos=0;
    vector<pair<int,int>> vec;
    int n,staying , cap; 
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>staying>>cap;
        vec.push_back({staying,cap});
    }
    for(int i=0; i<vec.size(); i++){
        if(vec.at(i).second - vec.at(i).first >=2){
            pos++;
        }
    }

    cout<<pos;
}