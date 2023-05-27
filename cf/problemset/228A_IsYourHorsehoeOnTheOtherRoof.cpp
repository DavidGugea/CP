#include <bits/stdc++.h>

using namespace std;

int main() {
	int s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;

	unordered_map<int, int> mp;
	vector<int> arr {s1, s2, s3, s4};
	int res = 0;

	for (int i = 0 ; i < arr.size(); ++i) {
		auto it = mp.find(arr[i]);
		if (it != mp.end()) {
			mp[arr[i]]++;
			++res;
		} else {
			mp[arr[i]] = 1;
		}
	}

	cout << res << "\n";

	return 0;
}