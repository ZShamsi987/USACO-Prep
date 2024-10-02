#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;

int main(){

    int n; cin>>n;

    vector<string>words(n*2);

    for(int a=0; a<n*2; a+=2){
        cin>>words[a]>>words[a+1];
    }

    //dont know how to complete all the possibilities of blocks
    //thought of like an on/off thing for each block side but wasn't sure how to implement tbh

}

