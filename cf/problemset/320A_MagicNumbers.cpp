#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;

	ll i = 0LL;

	bool res = true;

	/*
	114114 // YES
	cbcb
	012345
	1111   // YES
	1441   // YES
	0123
	141    // YES
	441231 // NO
	*/

	while (i < s.size()) {
		if (i <= s.size() - 3 && s[i] == '1' && s[i+1] == '4' && s[i+2] == '4') {
			// cout << "a. true at : " << i << "\n";
			i += 3;
			continue;
		}

		if (i <= s.size() - 2 && s[i] == '1' && s[i+1] == '4') {
			// cout << "b. true at : " << i << "\n";
			i += 2;
			continue;
		}

		if (s[i] == '1') {
			// cout << "c. true at : " << i << "\n";
			i += 1;
			continue;
		}

		res = false;
		break;
	}

	if (res) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}