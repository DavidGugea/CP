#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;

	int a = 0;
	int b = 0;

	string team_a = "";
	string team_b = "";
	string val;

	for (int i = 0; i < n; ++i) {
		cin >> val;

		if (team_a == "") {
			team_a = val;
			a++;
			continue;
		}

		if (val == team_a) {
			++a;
		} else {
			if (team_b == "") {
				team_b = val;
			}

			++b;
		}
	}

	if (a > b) {
		cout << team_a << "\n";
	} else {
		cout << team_b << "\n";
	}

	return 0;
}