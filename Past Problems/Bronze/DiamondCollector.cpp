/*
-sliding window technique
-original idea of checking difference iterating through nested loop wouldnt work if you have a value J and z=j-N is in range as well as x=J+n but
x and z are not in range

-this constantly updates, adn is alr sorted
-10/10!

-better time wise: 45:52, hopefully keep this work up
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout); 

    int N, difference;
    cin >> N >> difference;

    vector<int> all(N);
    
    for(int a = 0; a < N; a++) {
        cin >> all[a];
    }

    sort(all.begin(), all.end());

    int max_diamonds = 1;
    int left = 0;

    for (int right = 1; right < N; right++) {
        
        while (all[right] - all[left] > difference) {
            left++;
        }
        max_diamonds = max(max_diamonds, right - left + 1);
    }

    cout << max_diamonds << endl;
}
