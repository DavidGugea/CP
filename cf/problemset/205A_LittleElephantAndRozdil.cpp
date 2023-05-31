#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	int res;
	int reps;
	int residx;
	int dist;

	// unordered_map<dist, pi<last_index, number_of_reps>>
	unordered_map<int, pair<int, int>> mp;

	for (int i = 0; i < n; ++i) {
		cin >> dist;

		if (i == 0) {
			res = dist;
			residx = 0;
			reps = 1;
			continue;
		}

		if (dist < res) {
			res = dist;
			residx = i;
			reps = 1;
		} else if (dist == res) {
			reps++;
		}
	}

	if (reps != 1) {
		cout << "Still Rozdil\n";
	} else {
		cout << residx+1 << "\n";
	}

	return 0;
}