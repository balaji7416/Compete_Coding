#include<bits/stdc++.h>
using namespace std;
int main(){
    int M,N; 
    cin>>N>>M;
    int area = M*N;
    if(area&1){
        cout<<(area-1)/2;
    }
    else{
        cout<<area/2;
    }
    }