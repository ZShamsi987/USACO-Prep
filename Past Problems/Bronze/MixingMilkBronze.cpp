/*
READ EDITORAL :(

-for loop pushes values to vector using scanf

-only keeps track of 2 buckets at a time(what i was doing is innefeceint and incorrect[using all 3 buckets and a bunch of for and while loop])

-!!!!!    i%3 gives you the bucket number, good knowledge to keep constant modded in for loop to find round number in simulation

-once you have the buckets you find the amount you need to add and subtract it from the current bucket and add to the second

-the variable amount is the minimum between the amount of milk in bucket 1 and the difference between capacity in bucket 2
and the amount in bucket 2, this allows you to pour what you have and is allowed

*/

#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

const int N = 3;  // The number of buckets (which is 3)
const int TURN_NUM = 100;

int main() {
	freopen("mixmilk.in", "r", stdin);

	// capacity[i] is the maximum capacity of bucket i
	vector<int> capacity(N);
	// milk[i] is the current amount of milk in bucket i
	vector<int> milk(N);
	for (int i = 0; i < N; i++) { scanf("%d %d", &capacity[i], &milk[i]); }

	for (int i = 0; i < TURN_NUM; i++) {
		int bucket1 = i % N;
		int bucket2 = (i + 1) % N;

		/*
		 * The amount of milk to pour is the minimum of the remaining milk
		 * in bucket 1 and the available capacity of bucket 2
		 */
		int amt = min(milk[bucket1], capacity[bucket2] - milk[bucket2]);

		milk[bucket1] -= amt;
		milk[bucket2] += amt;
	}

	freopen("mixmilk.out", "w", stdout);
	for (int m : milk) { cout << m << '\n'; }
}