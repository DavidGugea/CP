#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int m = -1;
	int n = -1;
	int v;

	for (int i = 0 ; i < 5; ++i) {
		for (int j = 0 ; j < 5; ++j) {
			cin >> v;
			if (v == 1) {
				m = i;
				n = j;
				break;
			}
		}
	}

	cout << abs(m-2) + abs(n-2) << "\n";

	return 0;
}