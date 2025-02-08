#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5][5]  , current_row, current_col;
    int count;
    for(int i=0;i<5; i++){
        for(int j=0; j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5; i++){
        for(int j=0; j<5;j++){
            if(arr[i][j] == 1){
                current_row = i;
                current_col = j;
            }
        }
    }

    count = abs(current_col-2)+abs(current_row -2);
    cout<<count;



    
}