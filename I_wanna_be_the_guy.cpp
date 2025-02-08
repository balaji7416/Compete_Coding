#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    set<int> level;

    int n1;
    cin>>n1;
    vector<int> level1(n1);
    for(int i=0; i<n1; i++){
        cin>>level1.at(i);
    }
    int n2;
    cin>>n2;
    vector<int> level2(n2);
    for(int i=0; i<n2; i++){
        cin>>level2.at(i);
    }

    for(auto i:level1){
        level.insert(i);
    }
    for(auto i:level2){
        level.insert(i);
    }

    bool can_they = (level.size() == n);

    if(can_they){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }

    
}