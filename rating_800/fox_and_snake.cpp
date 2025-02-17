#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n,m; cin>>n>>m;
    vector<vector<char>> snake(n,vector<char>(m,'#'));
    int ref=0;
    for(int i=0; i<n; i++){
       if(i&1){
        if(ref%2==0)
        for(int j=0; j<m-1; j++){
            snake.at(i).at(j)='.';
        }
        else
        for(int j=1; j<m; j++){
            snake.at(i).at(j)='.';
        }
        ref++;
       }
      
    }


    for(auto i: snake){
        for(auto j:i){
            cout<<j;
        }
        cout<<endl;
    }
}