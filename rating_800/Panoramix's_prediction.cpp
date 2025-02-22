#include<bits/stdc++.h>

using namespace std;
bool is_prime(int a){
    for(int i=2; i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int a,b; cin>>a>>b;
    bool flag=true;
    if(!is_prime(b)) flag=false;
    else{
        for(int i=a+1; i<b; i++){
            if(is_prime(i)){
                flag=false;
                break;
            }
        }
    }
  

    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}