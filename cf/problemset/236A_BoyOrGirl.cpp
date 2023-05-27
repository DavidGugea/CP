#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;
	unordered_map<char, int> mp;
	int res = 0;

	for (char c : s) {
		auto it = mp.find(c);
		if (it != mp.end()) {
			mp[c]++;
		} else {
			mp[c] = 1;
			++res;
		}
	}

	if (res % 2 == 0) {
		cout << "CHAT WITH HER!\n";
	} else {
		cout << "IGNORE HIM!\n";
	}

	return 0;
}