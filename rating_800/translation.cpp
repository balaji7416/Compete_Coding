#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1,str2; cin>>str1>>str2;
    int flag = 1;

    if(str1.size() != str2.size()){
        flag = 0;
    }

    else{

    
    
    for(int i=0; i<str1.size(); i++){
        if(str1.at(i) != str2.at(str1.size()-i-1)){
            flag = 0;
            break;
        }
    }

    }

    if(flag ==  1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}