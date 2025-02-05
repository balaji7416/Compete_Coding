#include<bits/stdc++.h>

using namespace std;

int main() {
    int contestants,k; cin>>contestants>>k;
    vector<int> arr(100);

    for(int i=0; i<contestants; i++){
        cin>>arr[i];
    }
    int ref_score = arr[k-1] , count =0;
    for(int i=0; i<contestants; i++){
        if(arr[i] >= ref_score && arr[i]>0){
            count+=1;
        }
    }

    cout<<count<<'\n';
    
    return 0;
}