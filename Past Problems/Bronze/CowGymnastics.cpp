/*
-no ideas on this one at all except to make a vector and mod the positions but that was very stupid
-need to do better, haven't solved a problem in a long time


-2 arrays
-one for position, one for countin how many times it comes before
-since the for loop moves form 0 up, it will automatically be ready to rank
-every time sumn is greater than another, it puts that number in the column of array and the lower in row. then u count

*/


	       #include <iostream>
	       using namespace std;
	       int N, K;
	       int rankings[10][20], better[20][20];
	       int main() {
	       	freopen("gymnastics.in", "r", stdin);
	       	freopen("gymnastics.out", "w", stdout);
	       	// reading in input
	       	cin >> K >> N;
	       	for (int i = 0; i < K; i++) {
	       		for (int j = 0; j < N; j++) {
	       			cin >> rankings[i][j];
	       			rankings[i][j]--;
	       		}
	       	}
	       	// calculating the amount of times that cow a comes before cow b
	       	for (int i = 0; i < K; i++) {              // looping over the trials
	       		for (int j = 0; j < N; j++) {          // rankings[i][j] = cow a
	       			for (int k = j + 1; k < N; k++) {  // rankings[i][k] = cow b
	       				better[rankings[i][j]][rankings[i][k]]++;
	       			}
	       		}
	       	}
	       	// calculating answer
	       	int ans = 0;
	       	for (int i = 0; i < N; i++) {
	       		for (int j = 0; j < N; j++) {
	       			if (better[i][j] == K)  // if cow i comes before cow j K times then
	       			                        // increment our answer
	       				ans++;
	       		}
	       	}
	       	// print answer
	       	cout << ans;
	       }