using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    long long size;
    cin>>size;

    long long content;
    long long moves=0;

    vector<long long>arrayx;

    while(cin>>content){
        arrayx.push_back(content);
    }

    for(long long i=1; i<size;i++){
        long long check=arrayx.at(i);
        long long checkt=arrayx.at(i-1);

        while(checkt>check){
            check++;
            arrayx.at(i) = check;
            moves++;
        }
       
        
    }

    cout<<moves;

}