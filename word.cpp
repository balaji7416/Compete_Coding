#include<bits/stdc++.h>
using namespace std;

int main(){

    string str; cin>>str;

    int lcount = 0 ;
    int ucount = 0 ;
    for(int i=0; i<str.size();i++){
        if(str.at(i)>='a' && str.at(i)<='z'){
            lcount++;
        }
        else if(str.at(i)>='A' && str.at(i)<='Z'){
            ucount++;
        }
    }

    if(lcount>=ucount){
        for(int i=0; i<str.size(); i++){
            str.at(i) = tolower(str.at(i));
        }
    }
    else if(lcount<ucount){
        for(int i=0; i<str.size(); i++){
            str.at(i) = toupper(str.at(i));
        }
    }

    cout<<str;



    return 0;
}