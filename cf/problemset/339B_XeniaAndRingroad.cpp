#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll m, t;
	cin >> m >> t;

	vector<ll> tasks;
	ll val;

	for (ll i = 0 ; i < t; ++i) {
		cin >> val;
		tasks.push_back(val);
	}

	ll a, b;
	ll res = tasks[0]-1;

	for (ll i = 0 ; i < tasks.size() - 1; ++i) {
		a = tasks[i];
		b = tasks[i + 1];

		if (a <= b) {
			res += b - a;
		} else {
			res += m - a + b;
		}
	}

	cout << res << "\n";

	return 0;
}