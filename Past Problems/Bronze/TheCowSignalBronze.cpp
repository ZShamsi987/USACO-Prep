#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;



int main() {
    int row, column, magnify;
    scanf("%d %d %d", &row, &column, &magnify);

    vector<string>strings;

    for(int p=0; p<row; p++){
        scanf("%s", &strings[p]);
    }

    cout<<strings[0];
}