#include<bits/stdc++.h>
using namespace std; 

int main(){
    string name1,name2,letter; cin>>name1>>name2>>letter;
    map<char,int> names;
    map<char,int> letters;

    for(auto i: name1){
        names[i]++;
    }
    for(auto i: name2){
        names[i]++;
    }
    for(auto i: letter){
        letters[i]++;
    }
    
    if(names.size() != letters.size()){
        cout<<"NO";
    }
    else{

        bool flag = true; 
        for(auto it=names.begin(); it !=names.end(); ++it){
           char key = it->first;
           auto value = it->second;
           auto itt = letters.find(key);
           
           if(itt == letters.end() || itt->second != it->second){
            flag=false;
           }

        }

        if(flag)
        cout<<"YES";
        else
        cout<<"NO";
        
        }
    }
   
    



