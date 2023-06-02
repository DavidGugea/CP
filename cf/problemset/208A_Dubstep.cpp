#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	string res = "";

	int i = 0;
	while (i < s.size()) {
		if (i < s.size() - 2 && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
			if (res != "") {
				res += " ";
			}
			i += 3;
			continue;
		}

		res += s[i];
		++i;
	}

	cout << res << "\n";

	return 0;
}