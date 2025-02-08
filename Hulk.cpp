#include<bits/stdc++.h>
using namespace std;

int main(){

   int n; cin>>n;
   string feel="I hate";
   string feel1 = "I love";
   string reac ="";

   for(int i=1; i<=n; i++){
    if(i%2 != 0 && i!=n){
        reac += feel+" that ";
    }
    else if(i%2 == 0 && i!=n){
        reac += feel1 + " that ";
    }
    else{
        if(n&1) reac += feel + " it";
        else reac += feel1 + " it";
    }   
    
   }

   cout<<reac;

}
