#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    string seq; cin>>seq;

    int count=0;
    for(int i=0; i<seq.size() - 1; i++){
        if(seq.at(i) == seq.at(i+1)){
            count++;
        }
    }

    cout<<count;

    return 0;
}