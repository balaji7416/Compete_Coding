#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num,yes,count=0;
   
    int A,B,C;
    cin>>num;
     int arr[num][3];

    for(int i=0; i<num; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
        
    }
    for(int i=0; i<num; i++){
        yes =0;
        for(int j=0;j<3; j++){
            if(arr[i][j] == 1){
                yes+=1;
            }
        }
        if(yes>=2){
            count+=1;
        }
       

    }
    cout<<count;
    
}