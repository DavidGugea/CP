#include <bits/stdc++.h>

using namespace std;

int binary_search_1(vector<int> v, int sv) {
	int n = v.size();
	int a = 0, b = n - 1;

	while (a <= b) {
		int k = (a + b) / 2;

		if (v[k] == sv)
			return k;

		if (v[k] > sv)
			b = k-1;
		else
			a = k + 1;
	}

	return -1;
}

int binary_search_2(vector<int> v, int sv) {
	int k = 0;	
	int n = v.size();
	for (int b = n / 2; b >= 1; b /= 2)
		while (k + b < n && v[k+b] <= sv) k += b;

	if (v[k] == sv)
		return k;
	else
		return -1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	vector<int> v;

	int x;
	while (t--) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	int search_value;
	cin >> search_value;

	int res1 = binary_search_1(v, search_value);
	cout << "res1: " << res1 << "\n";

	int res2 = binary_search_2(v, search_value);
	cout << "res2: " << res2 << "\n";

	return 1;
}
