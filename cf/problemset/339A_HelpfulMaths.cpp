#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;
	if (s.size() == 1) {
		cout << s[0] << "\n";
		return 0;
	}

	vector<int> out;
	for (int i = 0 ; i < s.size(); i += 2) {
		out.push_back((int)(s[i]-'0'));
	}

	sort(out.begin(), out.end());

	for (int i = 0; i < out.size() - 1; ++i) {
		cout << out[i] << "+";
	}

	cout << out[out.size()-1] << "\n";

	return 0;
}