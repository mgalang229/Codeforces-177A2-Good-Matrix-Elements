
#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int temp = n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// here are the positions that are needed to be added to the total sum:
			// i == j: main diagonal from left side to right side
			// i == n / 2: middle row
			// j == n / 2:  middle column
			// j == temp - 1: main diagonal from right side to left side
			if (i == j || i == n / 2 || j == n / 2 || j == temp - 1) {
				sum += a[i][j];
			}
		}
		// decrement the 'temp' variable to follow a diagonal path
		temp--;
	}
	cout << sum << '\n';
	return 0;
}
