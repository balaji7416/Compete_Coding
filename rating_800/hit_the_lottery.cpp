#include<bits/stdc++.h>
using namespace std;

int min_notes(int n,int temp){

    if(n==0){
        return temp;
    }
    else if(n>=100){
        
        temp+=n/100;
        n=n%100;
        return min_notes(n,temp);
    }
    else if(n>=20){
        
        temp+=n/20;
        n=n%20;
        return min_notes(n,temp);
    }
    else if(n>=10){
       
        temp+=n/10;
        n=n%10;
        return min_notes(n,temp);
    }
    else if(n>=5){
        
        temp+=n/5;
        n=n%5;
        return min_notes(n,temp);
    }
    else if(n>=1){
       
        temp+=n/1;
        n=n%1;
        return min_notes(n,temp);
    }
}

int main(){

    int n; cin>>n;
    int temp=0;
    int ans = min_notes(n,temp);
    cout<<ans;

}