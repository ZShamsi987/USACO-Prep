using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    string x;
    cin>>x;

    long long longest=0;
    long long m=x.length();

    vector<long long>reps;

    if (m > 0) {
        longest = 1;
    }

    for(long long i=1; i<m; i++) {
        if(x[i] == x[i-1]) {
            longest++;
        }
        else {
            reps.push_back(longest);
            longest=1;
        }
    }

    if (longest > 0) {
        reps.push_back(longest);
    }

    long long max = reps.empty() ? 0 : *max_element(reps.begin(), reps.end());
    cout << max;

    return 0;
}