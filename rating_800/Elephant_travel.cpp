#include<bits/stdc++.h>
using namespace std;

int main(){

    int pos; cin>>pos;
    
    int total_steps;
    
    if(pos%5 == 0){
        total_steps =  (pos/ 5);
    }
    else{
        total_steps = (pos/5)+1;
    }
    cout<<total_steps;
}