#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		int val; cin >> val;
		a[i] = val;
	}

	sort(a.begin(), a.end());

	/*
	1 1 1 2 2 2 -> 3 groups
	0 1 2 3 4 5

	1 1 2 2 3 3 -> 3 groups
	0 1 2 3 4 5

	1 1 2 2 4 6 -> 3 groups
	0 1 2 3 4 5

	*/

	/*
	cout << "--------\n";
	cout << a[n/3-1] << "\n";
	cout << a[n/3] << "\n";
	cout << a[2*n/3-1] << "\n";
	cout << a[2*n/3] << "\n";
	cout << "--------\n";
	*/

	if (a[n/3-1] == a[n/3] || a[2*n/3-1] == a[2*n/3]) {
		cout << "-1\n";
		return 0;
	}

	vector<int> i;
	vector<int> j;
	vector<int> k;

	int idx = 0;
	int jdx = n/3;
	int kdx = 2*n/3;

	for (int l = 0; l < n/3; ++l) {
		i.push_back(a[idx]);
		j.push_back(a[jdx]);
		k.push_back(a[kdx]);

		++idx;
		++jdx;
		++kdx;
	}

	cout << "vector<int> i:\n";
	for (int l : i) {
		cout << l << " ";
	}
	cout << "\n";
	cout << "vector<int> j:\n";
	for (int l : j) {
		cout << l << " ";
	}
	cout << "\n";
	cout << "vector<int> k:\n";
	for (int l : k) {
		cout << l << " ";
	}
	cout << "\n";

	

	return 0;
}