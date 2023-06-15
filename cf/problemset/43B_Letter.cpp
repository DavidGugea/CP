#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s1, s2;
	cin >> s1 >> s2;
	getline(cin, s1);
	getline(cin, s2);

	cout << "\n";
	cout << "s1: " << s1 << "\n";
	cout << "s2: " << s2 << "\n";

	/*
	unordered_map<char, int> m1;
	unordered_map<char, int> m2;

	for (char c : s1) {
		auto it = m1.find(c);

		if (it == m1.end()) {
			m1.insert(make_pair(c, 0));
		} else {
			m1[c]++;
		}
	}

	for (char c : s2) {
		auto it = m2.find(c);

		if (it == m2.end()) {
			m2.insert(make_pair(c, 0));
		} else {
			m2[c]++;
		}
	}

	for (pair<char, int> p : m2) {
		auto it = m1.find(p.first);

		if (it == m1.end() || p.second != it->second) {
			cout << "NO\n";
			return 0;
		}
	}

	cout << "YES\n";
	*/

	return 0;
}