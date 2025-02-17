#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n; cin>>n;
    vector<pair<int,int>> dress(n);
    for(int i=0; i<n;i++){
        cin>>dress.at(i).first;
        cin>>dress.at(i).second;
    }
    int sum=0;
    for(int i=0; i<n; i++){
        int temp=0;
        for(auto j: dress){
            if(dress.at(i).first == j.second)
            temp++;
        }
        sum+=temp;
    }

    cout<<sum;
}