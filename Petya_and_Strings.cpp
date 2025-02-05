#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1;
    string str2;
    
    int count1= 0,count2 =0;
    cin>>str1;
    cin>>str2;

    // for(int i=0;str1[i]!='\0';i++){
    //     if(str1[i]>str2[i]){
    //         if(str1[i]-32 != str2[i])
    //         count1+=1;
    //     }
    //     else if(str1[i]<str2[i]){
    //         if(str2[i]-32 != str1[i])
    //         count2+=1;
    //     }
  
    // }

    // if(count1 > count2){
    //     cout<<1;
    // }
    // else if(count2 >count1){
    //     cout<<-1;
    // }
    // else{
    //     cout<<0;
    // }

    transform(str1.begin(),str1.end(), str1.begin(),::tolower);
    transform(str2.begin(),str2.end(), str2.begin(),::tolower);

    if(str1>str2){
        cout<<1;
    }
    else if(str2>str1){
        cout<<-1;
    }
    else{
        cout<<0;
    }
}