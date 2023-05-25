#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;

	string out = "";
	int i = 0;
	while (i < s.size()) {
		if (s[i] == '.') {
			out += '0';
			i += 1;
			continue;
		}

		if (i != s.size() - 1 && s[i] == '-' && s[i+1] == '.') {
			out += '1';
			i += 2;
			continue;
		}

		if (i != s.size() - 1 && s[i] == '-' && s[i+1] == '-') {
			out += '2';
			i += 2;
			continue;
		}
	}

	cout << out << "\n";

	return 0;
}