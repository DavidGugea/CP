#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll k; cin >> k;
	string s; cin >> s;

	unordered_map<char, ll> mp;

	for (char c : s) {
		auto it = mp.find(c);

		if (it == mp.end()) {
			mp.insert(make_pair(c, 1LL));
		} else {
			mp[c] = it->second + 1LL;
		}
	}

	for (auto it : mp) {
		if (it.second % k != 0) {
			cout << "-1\n";
			return 0;
		}
	}

	for (int i = 0 ; i < k; ++i) {
		for (auto it:mp) {
			int rep = it.second / k;
			for (int j = 0; j < rep; ++j) {
				cout << it.first;
			}
		}
	}

	cout << "\n";

	return 0;
}