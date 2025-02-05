#include<bits/stdc++.h>
using namespace std;

bool unique(string year){
    map<char,int>ref;
    bool uniq = true;
    for(int i=0; i<year.size(); i++){
        ref[year.at(i)]++;
    }
    for(auto i: ref){
        if(i.second>1){
            uniq=false;
        }
    }
    return uniq;
}
int main(){

    int year; cin>>year;
    year++;
    string yearr = to_string(year);
    while(!unique(yearr)){
        year = year+1;
        yearr=to_string(year);
    }
    cout<<year;

    return 0;
}