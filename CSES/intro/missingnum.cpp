
using namespace std;
#include <iostream>

int main() {
    long long n;
    cin >> n; 

    long long temp;
    long long sum=0;

    long long x=0;

    while (cin >> temp) {
        sum+=temp;
    }
    for(long long i=0; i<n+1;){
        x +=i;
        i++;
    }
    
    long long m=x-sum;
    cout<<m;
}

