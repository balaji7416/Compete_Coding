#include<bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    map<string,int> polyhedrons = {{"Tetrahedron" ,4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};
    vector<string> hedron(n);

    for(int i=0; i<n; i++){
        cin>>hedron.at(i);
    }

    int faces=0;
    for(auto i: hedron){
        faces += polyhedrons[i] ;
    }

    cout<<faces;


}