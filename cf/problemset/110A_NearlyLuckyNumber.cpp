#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	int ln = 0;
	for (char c : s) {
		if (c == '4' || c == '7') {
			++ln;
		}
	}

	string ns = to_string(ln);

	bool out = true;

	for (char c : ns) {
		if (c != '4' && c != '7') {
			out = false;
			break;
		}
	}

	if (out)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}