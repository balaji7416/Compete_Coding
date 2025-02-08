#include<bits/stdc++.h>
using namespace std;

int main(){

    string num1;
    string num2;
    string res="";
    cin>>num1>>num2;

        for(int j=0; j<num1.size(); j++){
            if((num1.at(j) == '0' && num2.at(j) == '0' ) || (num1.at(j) == '1' && num2.at(j) == '1' )){
                res += "0";
            }
            else{
                res+="1";
            }
        }

    cout<<res<<endl;
    
    return 0;
}