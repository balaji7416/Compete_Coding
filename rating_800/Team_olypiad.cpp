#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(0);
    vector<int> arr[3];
    int n; cin>>n;
    for(int i=0; i<n ; i++){
        int ref; 
        cin>>ref;
        arr[ref-1].push_back(i+1);
    }
    int teams= min(arr[0].size(),min(arr[1].size(),arr[2].size()));

    if(arr[0].empty() || arr[1].empty() || arr[2].empty()){
        cout<<0;
        return 0;
    }

    else{
        cout<<teams<<endl;
        for(int i=0;i<teams; i++){
            cout<<arr[0].at(i) << " " << arr[1].at(i) << " "<< arr[2].at(i)<<endl;
        }
    }

    return 0;
}