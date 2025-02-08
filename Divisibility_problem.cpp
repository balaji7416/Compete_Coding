#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;cin>>n;
    int num1 , num2; 
    int rem;
    vector<pair<int,int>> nums;
    vector<int> ans;
    for(int i=0; i<n; i++){
        cin>>num1>>num2;
        nums.push_back({num1,num2});
    }

    for(int i=0; i<nums.size(); i++){
        rem=nums.at(i).first%nums.at(i).second;
        if(rem==0){
            ans.push_back(0);
        }
        else{
            ans.push_back(nums.at(i).second-rem);
        }
       
    }
    for(auto i:ans){
        cout<<i<<endl;
    }


}