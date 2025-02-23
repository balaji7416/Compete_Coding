#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int summ=0;
    for(int i=1; i<=n; i++){
        summ+=i;
    }
    return summ;
}
int main() {
    int a; 
    cin>>a;
    int count=0;
    int i=1;
    while(a>=0){
        a-=sum(i);
        i++;
        if(a>=0)
        count++;
    }
    cout<<count<<endl;
    return 0;
}