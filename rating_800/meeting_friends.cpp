#include<bits/stdc++.h>
using namespace std; 
int maxi(int a,int b,int c){
   int max=a;
   if(b>max) max=b;
   if(c>max) max=c;

   return max;
}
int mini(int a, int b, int c){
    int min=a;
    if(b<min) min=b;
    if(c<min) min=c;

    return min;
}
int main(){
    int x1,x2,x3; cin>>x1>>x2>>x3;
    int maxm = maxi(x1,x2,x3);
    int minm = mini(x1,x2,x3);
    int mid = (x1+x2+x3)-(maxm+minm);
    int ans  = (maxm-mid)+(mid-minm);
    cout<<ans;
}