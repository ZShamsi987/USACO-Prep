/*
program was close but not what they wanted, need to work on understanding problems
i found biggest diff in x AND y rather than two POINTS

NEW thing from editorial:
for (int &t : x) { cin >> t; }

use of : is more effiecnet try to use, allocates to the vector cuz of &t, less for loop

*/


#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

int N;
scanf("%d", &N);

vector<int>allvals(N);
vector<int>maxes;

for(int a=0; a<N*2;a++){
    scanf("%d", &allvals[a]);
}

for(int s=0; s<N*2; s++){
    int curr=allvals[s];

    for(int d=0; d<N*2; d++){
        int compare=allvals[d];
        int before=abs(compare-curr);
        maxes.push_back(before);
    }

}

int after=*max_element(maxes.begin(), maxes.end());
int final=after*after;
cout<<final;


}