#include<bits/stdc++.h>
using namespace std;

string fin_order(int t, string order){
    char temp;
    if(t==0)return order;
    for(int i=0; i<order.size()-1; i++){
        if(order.at(i)=='B'&&order.at(i+1)=='G'){
           temp=order.at(i);
           order.at(i)=order.at(i+1);
           order.at(i+1)=temp;
           i++;
        }
        else{
            continue;
        }
    }
   return  fin_order(t-1,order);

}

int main(){

    int n,t; cin>>n>>t;
    string order; cin>>order;

    string final_order=fin_order(t,order);
    cout<<final_order;
}