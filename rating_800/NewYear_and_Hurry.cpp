#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n,k; cin>>n>>k;

    int left = 240-k;

    int count =0; 
    int c=n;
    while(left>0&&c>0){

        left-=5*(count+1);
        if(left>=0)
        count++;
        c--;
    }
    cout<<count;
}