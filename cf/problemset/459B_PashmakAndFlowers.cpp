#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long a; cin >> a;
	vector<int> n;
	for (long long i = 0; i < a; ++i) {
		int val; cin >> val;
		n.push_back(val);
	}

	sort(n.begin(), n.end());

	long long res1 = n[n.size()-1] - n[0];

	long long t1 = 0, t2 = 0;
	for (int i = 0 ; i < n.size(); ++i) {
		if (n[i] == n[0]) {
			++t1;
		} else {
			break;
		}
	}
	for (int i = n.size()-1; i >= 0; --i) {
		if (n[i] == n[n.size()-1]) {
			++t2;
		} else {
			break;
		}
	}

	long long res2;
	if (n[0] == n[n.size()-1]) {
		res2 = a * (a-1) / 2;
	} else {
		res2 = t1*t2;
	}

	cout << res1 << " " << res2 << "\n";

	return 0;
}