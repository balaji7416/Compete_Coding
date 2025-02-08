#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,l,m,n,d; cin>>k>>l>>m>>n>>d;

    set<int> ref;

    vector<int> skip;
    skip.push_back(k);
    skip.push_back(l);
    skip.push_back(m);
    skip.push_back(n);
    skip.push_back(d);

    int no_of;
    for(int i=0; i<skip.size()-1; i++){
        no_of=d/skip.at(i);
        for(int j=0; j<no_of; j++){
            ref.insert(skip.at(i)*(j+1));
        }

    }

    cout<<ref.size();
}