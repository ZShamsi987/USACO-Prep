/*
Below is my code, only passed 4/10 test cases, took ~1hr

all the way down is an editorial code

how the editorial works:
-a lot more effecient by using while(true) loop which goes until break
-keep multiplying by -2 an only needs 1 if statement. 



*/
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);

    int jpos;
    int cowpos;

    cin>>jpos>>cowpos;

    int round = 1;
    int i = 1;
    int newpos = jpos;
    int moves = 0;
    int realpos = jpos;
    int oldpos = jpos;
    int k = 0;

    while (realpos != cowpos) {
        if (round % 2 != 0) {
            newpos = jpos + i;
        } else {
            newpos = jpos - i;
        }

        k = oldpos - newpos;
        moves += abs(k);
        oldpos = newpos;

        if (newpos == cowpos) {
            cout << moves << endl;
            
        }

        if (cowpos > 0 && newpos > cowpos) {
            moves -= (newpos - cowpos);
            realpos = cowpos;
            cout << moves << endl;
            
        } else if (cowpos < 0 && newpos < cowpos) {
            moves -= abs(newpos - cowpos);
            realpos = cowpos;
            cout << moves << endl;
            
        }

        i *= 2;
        round++;
    }
    
}






//editorial

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("lostcow");

    int x, y;
    cin >> x >> y;

    int total_distance = 0;
    int current_jump = 1;

    while (true) {
        int next_position = x + current_jump;  // Move forward or backward depending on jump direction

        // If the cow is between x and next_position (or equal to next_position)
        if ((x <= y && next_position >= y) || (x >= y && next_position <= y)) {
            total_distance += abs(x - y);  // Only add the exact distance from current x to y
            break;
        }

        // Otherwise, add the full jump distance
        total_distance += abs(next_position - x);

        // Update x to the new position and double the jump size
        x = next_position;
        current_jump *= -2;  // Alternate between positive and negative jumps
    }

    cout << total_distance << endl;
}
