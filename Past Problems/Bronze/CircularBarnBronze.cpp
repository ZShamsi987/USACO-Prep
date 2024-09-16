#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);

    vector<int>roomcapacity(N);
    vector<int>roomnum(N);
    vector<int>least(N);

    for(int q=0; q<N; q++){
        scanf("%d", roomcapacity[q]);
        roomnum[q]=q;
    }

    for(int j=0; j<N; j++){
        int cows=roomcapacity[j];
        int theroomrn=roomnum[j];
        bool full;

        for(int w=0; w<N; w++){
            
        }


    }



}