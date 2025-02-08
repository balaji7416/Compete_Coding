#include<bits/stdc++.h>
using namespace std;

int main(){

    vector <int> ref;
    long long  n; cin>>n;
    long long  rem;

    while(n!=0){
        rem=n%10;
        n/=10;
        ref.push_back(rem);
    }

    int count =0;
    for(int i=0; i<ref.size(); i++){
        if(ref.at(i) == 4 || ref.at(i) == 7){
            count++;
        }
    }

    if(count==4 || count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }



    return 0;
}