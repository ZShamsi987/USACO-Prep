/*
-i was starting to get it lowk, but i dont ened the room capacity associated with each room like what i was tryna do
-set a local tracker and acc tracker
-goes through each barn(1 for loop) and then nest it simulating each cow going through it(2nd for loop)
-find minimum at end of each main loop
-find amount of moves because its circle so divide by %n
-multiply position variable by amount of cows which is found by the vector that has each cow

not hard, but bad implemntation overall, needa cook harder
*/


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