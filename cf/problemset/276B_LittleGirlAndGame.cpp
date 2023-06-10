#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;

	// aba {a:2, b:1} => del % 2 == 0 => first
	// abac {a:2, b :1, c :1} -> del % 2 != 0 => second
	// adcfeda {a:2, d: 2, c:1, f:1, e:1} -> del % 2 == 0 => first

	unordered_map<char, int> mp;
	for (int i = 0; i < s.size(); ++i) {
		auto it = mp.find(s[i]);

		if (it != mp.end())	{
			mp[s[i]]++;
		} else {
			mp[s[i]] = 1;
		}
	}

	int res = 0;

	for (pair<int, int> pii : mp) {
		if (pii.second % 2 != 0) {
			++res;
		}
	}

	if (res == 0 || res == 1) {
		cout << "First\n";
	} else if (res % 2 == 0) {
		cout << "Second\n";
	} else {
		cout << "First\n";
	}

	return 0;
}