#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; cin >> n;
	vector<int> p;
	int pages;
	for (int i = 0 ; i < 7; ++i) {
		cin >> pages;
		p.push_back(pages);
	}

	int j = 0;

	while (n >= 0) {
		n -= p[j];

		if (n <= 0) {
			cout << j + 1 << "\n";
			return 0;
		} else {
			j++;

			if (j == 7) {
				j = 0;
			}
		}
	}

	return 0;
}