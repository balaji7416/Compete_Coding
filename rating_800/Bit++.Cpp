#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int num,x=0 ;
    cin>>num;

    vector<string> operation(150);
    for(int i=0; i<num; i++){
        cin>>operation[i];
    }
    for(int i=0; i<num; i++){
        if((operation[i] == "++X")|| (operation[i] == "X++")){
            x++;
        }
        else if((operation)[i] == "--X" || operation[i] == "X--"){
            x--;
        }
        else{
            continue;
        }
    }
    cout<<x;

    return 0;
}