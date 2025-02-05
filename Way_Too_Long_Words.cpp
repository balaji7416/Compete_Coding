#include<bits/stdc++.h>
using namespace std;

typedef struct strin{
    char arrr[105];
}strin;

int main(){
    int num,len;
    string str;
    strin arr[105];
    cin>>num;
    int i=0;
    while(i<num){
        cin>>arr[i].arrr;
        len=0;
        i++;}

        for(int i=0; i<num; i++){
            str = arr[i].arrr;
            len = str.length();
            if(len>10){
                cout<<str[0]<<len-2<<str[len-1]<<'\n';
            }
            else{
                cout<<str<<'\n';
            }
        }
}