#include<bits/stdc++.h>
using namespace std;
int main(){
    int weight;
    cin>>weight;

    if((weight & 1)|| weight == 2){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}