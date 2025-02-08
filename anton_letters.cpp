#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char> uniq;

    string lett;
    getline(cin,lett);
    

    for(auto i: lett){
        if(i!='{' && i!= '}' && i!= ',' && i!=' '){
            uniq.insert(i);
        } 
    }

    cout<<uniq.size();
}