#include<bits/stdc++.h>
using namespace std;

int main(){

    string exp;
    cin>>exp;
    vector<int> orderr;
    multiset <int> order;
    for(int i=0; i<exp.size(); i+=2){
        orderr.push_back(int(exp[i]));
    }

    for(int i=0; i<orderr.size(); i++){
      for(int i=0; i<orderr.size()-1; i++){
        if(orderr.at(i)>orderr.at(i+1)){
        int temp = orderr.at(i);
        orderr.at(i) = orderr.at(i+1);
        orderr.at(i+1)=temp;
        }
      }
    }

    for(int i=0; i<exp.size(); i+=2){
        exp.at(i) = orderr.at(i/2);
    }

    cout<<exp;
    
}