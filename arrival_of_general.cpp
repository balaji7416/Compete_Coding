#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;cin>>n;
    vector<int> heights(n);

    for(int i=0; i<n; i++){
        cin>>heights.at(i);
    }

    int min,max,pos_min=1,pos_max=1;
    min=max=heights.at(0);
    for(int i=0; i<n; i++){
        if(heights.at(i)<=min){
            min=heights.at(i);
            pos_min=i+1;
        }
        if(heights.at(i)>max){
            max=heights.at(i);
            pos_max=i+1;
        }
    }

    int time=n-pos_min + pos_max-1;

    if(pos_min < pos_max){
        time--;
    }

    cout<<time;
}