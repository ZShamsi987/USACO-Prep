/*
i tried, it didnt really work. quit 54 mins in, just trying to get through more probs

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> nums(N);        
    vector<string> words(N);    

    int liars = 0;

    for (int a = 0; a < N; a++) {
        cin >> words[a] >> nums[a]; 
    }

    
    for (int j = 0; j < N - 1; j++) {
        int firstnum = nums[j];
        string firstword = words[j];

        int secondnum = nums[j + 1];
        string secondword = words[j + 1];  

        if (firstword == "G" && secondword == "L") {
            int inequality=secondnum>firstnum;
                if(inequality=1){
                    liars++;
                }
        }

        if (firstword == "L" && secondword == "G") {
            int inequality=firstnum>secondnum;
                if(inequality=1){
                    liars++;
                }
        }
        
    }

    cout<<liars;

}
