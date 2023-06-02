#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int k; cin >> k;

	if (k == 0) {
		cout << "0\n";
		return 0;
	}

	vector<int> a;
	for (int i = 0 ; i < 12; ++i) {
		int val; cin >> val;
		a.push_back(val);
	}

	sort(a.rbegin(), a.rend());

	/*
	cout << "PRINT A\n";
	for (int i : a) {
		cout << i << " - ";
	}
	cout << "\n";
	cout << "PRINT A\n";
	*/

	// find the size of the min pair of numbers that sum up >= k.
	int res = 0;
	int t = 0;
	for (int i = 0 ; i < a.size(); ++i) {
		t += a[i];
		++res;
//		cout << "i: " << i << " -- t: " << t << "\n";

		if (t >= k) {
			break;
		}
	}

	if (t < k) {
		cout << -1 << "\n";
	} else {
		cout << res << "\n";
	}

	return 0;
}