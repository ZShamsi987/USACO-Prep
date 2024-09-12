#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);  
    int row, column, magnify;
    scanf("%d %d %d", &row, &column, &magnify);

    string line;
    char thechar;
    string outline;

    for (int i = 0; i < row; i++) {
        cin >> line;  // Change 2: Using 'cin >> line' instead of getline

       
        for (int j = 0; j < column; j++) {
            thechar = line[j];  // Access the correct character from line (use j instead of column)
            for (int x = 0; x < magnify; x++) {
                outline.push_back(thechar);  // Append magnified character
            }
        }

        // Print the magnified line multiple times for vertical magnification
        for (int m = 0; m < magnify; m++) {
            cout << outline << endl;  
        }

        outline.clear();  
    }

    return 0;
}
