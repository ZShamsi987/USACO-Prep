#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int x, y, m;
    scanf("%d %d %d", &x, &y, &m);

    vector<int>maximo;

    int currm;

    do{
        currm+=x;

    }while(currm<m);

    if(currm+y<=m){
        do{

        currm+=y;

        }while(currm<m);
    }
    else if(currm+y>=m){
        maximo.push_back(currm);
        currm=0;
    }

    cout<<*max_element(maximo.begin(), maximo.end());

}