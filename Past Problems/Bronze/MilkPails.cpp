/*
i was oding, just use for loops and go through it, lowk getting onfused on the loops lock in
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int X, Y, M;
    cin >> X >> Y >> M;

    int maxmilko = 0;

    
    for (int i = 0; i * X <= M; i++) {
        int remaining = M - i * X;
        
        int maxy = (remaining / Y) * Y;

        maxmilko = max(maxmilko, i * X + maxy);
    }

    cout << maxmilko << endl;
}
