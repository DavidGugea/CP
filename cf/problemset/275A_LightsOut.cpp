#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<vector<int>> v;
	int val;

	for (int i = 0 ; i < 3; ++i){
		vector<int> newv;
		for (int j = 0 ; j < 3; ++j) {
			cin >> val;
			newv.push_back(val);
		}
		v.push_back(newv);
	}

	for (int i = 0; i < 3 ; ++i) {
		for (int j = 0 ; j < 3; ++j) {
			int t = v[i][j];

			if (i != 0) {
				t += v[i-1][j];
			}
			if (j != 0) {
				t += v[i][j-1];
			}
			if (i != 2) {
				t += v[i+1][j];
			}
			if (j != 2) {
				t += v[i][j+1];
			}

			if (t % 2 == 0) {
				cout << "1";
			} else {
				cout << "0";
			}
		}

		cout << "\n";
	}

	return 0;
}