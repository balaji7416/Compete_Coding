#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,H; cin>>n>>H;
    int h;
    vector<int> heights;
    for(int i=0; i<n; i++){
        cin>>h;
        heights.push_back(h);
    }
    int width =0;
    for(int i=0; i<heights.size(); i++){
        if(heights.at(i)<=H){
            width+=1;
        }
        else{
            width+=2;
        }
    }

    cout<<width;

    return 0;
}