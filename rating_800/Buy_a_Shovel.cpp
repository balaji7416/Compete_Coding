#include<bits/stdc++.h>
using namespace std; 

int main(){

    int n,r;cin>>n>>r;
    int rem,count=0;
    int temp=n;
    while(1){

        rem=n%10;
        count++ ;

        if(rem==0 || rem==r)
        break;

        n+=temp;

    }

    cout<<count;
}