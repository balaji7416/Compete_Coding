#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin>>n;
    vector<int> perc;
    int ref;
    for(int i=0; i<n; i++){
        cin>>ref;
        perc.push_back(ref);
    }
     double frac_sum=0;
    for(auto i: perc){
        frac_sum+=i;
    }
    frac_sum=double(frac_sum/100);
    

     double vol_perc =  double (frac_sum/n);

     double frac_perc=double(vol_perc*100);

     cout<<frac_perc;


}