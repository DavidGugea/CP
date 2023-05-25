#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> arr;
	for (int i = 0 ; i <= 10; ++i) 
		arr.push_back(i);

	int x = 3; // search value
	int n = arr.size();

	auto k = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
	if (k < n && arr[k] == x) {
		cout << x << " found at index " << k << "\n";
	}

	return 1;
}