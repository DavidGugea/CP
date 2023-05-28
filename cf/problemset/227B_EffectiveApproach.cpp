#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vector<int> v;
	int val;

	for (int i = 0 ; i < n; ++i) {
		cin >> val;
		v.push_back(val);
	}

	int vasya = 0; // 1 -> n
	int petya = 0; // n -> 1

	int m;
	cin >> m;

	// 1 2 3 4 5
	// 0 1 2 3 4

	for (int i = 0 ; i < m ; ++i) {
		int search_value; cin >> search_value;
		int count = 0;

		for (int j = 0 ; j < n; ++j) {
			vasya++;
			count++;

			if (v[j] == search_value) {
				petya += n - count + 1;
				break;
			}
		}
	}

	cout << vasya << " " << petya << "\n";

	return 0;
}