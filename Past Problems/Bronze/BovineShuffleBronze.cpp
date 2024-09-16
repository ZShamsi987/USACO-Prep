//only passed 1 test case!! :( not sure rn will check
//UPDATED
/*
-understood the problem wrong, line 2 isnt just the position but shuffle order
-reverse shuffle order 3 times
-track in vector and previous variable checking
*/

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(){
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);  

    int N;
    scanf("%d", &N);

    vector<int> unsortedorder(N);
    vector<int> unsortedcows(N);
    vector<int> realorder(N);

    int z;
    int x;

    for(int i = 0; i < N; i++){
        scanf("%d", &unsortedorder[i]);
    }

    for(int k = 0; k < N; k++){
        scanf("%d", &unsortedcows[k]);
    }

    for(int j = 0; j < N; j++){
        z = unsortedorder[j];
        x = unsortedcows[j];
        realorder[z - 1] = x; 
    }


    for(int i = 0; i < N; i++){
        cout << realorder[i] << endl;
    }
}
