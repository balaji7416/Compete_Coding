#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> vec(26,0);
    bool is_pangram=true;

    string str;
    str.resize(n);
    

    cin>>str;
    transform(str.begin(),str.end(),str.begin(), ::tolower);

    for(int i=0; i<str.size(); i++){
       vec[str[i]-'a']++ ;
    }

    for(int i:vec){
        if(i<1){
            is_pangram = false;
            break;
        }
    }

    if(is_pangram){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}