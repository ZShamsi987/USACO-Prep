#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> countLetters(const string& word) { //takes input of string var word
    vector<int> letterCount(26, 0);
    for (char c : word) { //goes through each character putting it in lettercount
        letterCount[c - 'a']++; //indexes it based on a/0 MOST IMPORTANT LINE
    }
    return letterCount;
}

int main() {
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);  

    int n; 
    cin >> n;

    vector<pair<string, string>> boards(n); //each block
    vector<int> totalCounts(26, 0); //final letters
    
    for (int i = 0; i < n; i++) {
        cin >> boards[i].first >> boards[i].second;

        vector<int> count1 = countLetters(boards[i].first);
        vector<int> count2 = countLetters(boards[i].second);

        //each vector calls back count letters which returns the vector with all letter positions

        for (int j = 0; j < 26; j++) {
            totalCounts[j] += max(count1[j], count2[j]);  
            //add to the running count whichever block is more needy on that letter
        }
    }

    for (int j = 0; j < 26; j++) {
        cout << totalCounts[j] << endl;
    }

    return 0;
}
