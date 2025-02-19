#include<bits/stdc++.h>
using namespace std; 

int main(){

    string ans="";
    map<string,string> mapp={{".","0"},{"-.","1"},{"--","2"}};

    string ref; 

    cin>>ref; 
    
    int i=0;
    while(i<ref.size()){
        if(ref.at(i)=='.'){
            ans+=mapp["."];
        }
        else if(ref.at(i)=='-'){
            string sub=ref.substr(i,2);
            ans+=mapp[sub];
            i++;
        }
        i++;
    }

    cout<<ans;
}