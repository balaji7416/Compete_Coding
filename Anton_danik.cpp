#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;
    
    vector<char> ref(n);
    
    for(int i=0; i<ref.size(); i++){
        cin>>ref.at(i);
    }

    int acount=0 , dcount=0;
    for(int i=0; i<ref.size(); i++){
        if(ref.at(i) == 'A'){
            acount++;
        }
        else if(ref.at(i)=='D'){
            dcount++;
        }
    }

    if(acount>dcount){
        cout<<"Anton";
    }
    else if(dcount>acount){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }

}