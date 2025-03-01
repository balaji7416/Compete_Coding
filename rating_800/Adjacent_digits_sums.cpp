#include<bits/stdc++.h>
using namespace std; 

int main(){

    int t; cin>>t; 

    while(t--){

        int a,b; cin>>a>>b;
        int ref = (a-b)+10;

        if( ref>=9 and ref%9 == 0){    // if s(n) = x  ,  s(n+1)=x-9k+1  ; => s(n)-s(n+1)+10 = 9k+9 but k>=0 so ref should be greater than 9 and divisible by 9
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

    return 0;
}