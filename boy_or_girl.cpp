#include <bits/stdc++.h>
using namespace std;
int main(){
    string name; cin>>name;

    set<char> tester;
    for(int i=0; i<name.size(); i++){
        tester.insert(name.at(i));
    }
    
    if((tester.size())%2 != 0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}