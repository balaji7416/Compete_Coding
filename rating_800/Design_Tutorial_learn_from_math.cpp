#include<bits/stdc++.h>
using namespace std; 

bool is_prime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0) {
            return false;
            break;
        }
    }
    return true;

}
int main()
{
    int n; cin>>n; 
    int n1=4;
    int n2;
    while(1){

         n2=n-n1;
         if(!is_prime(n2)){
            cout<<n1<<" "<<n2;
            break;
         }
         n1++;
         while(is_prime(n1)){
            n1++;
         }
    }


}