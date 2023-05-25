#include <bits/stdc++.h>

using namespace std;

void print_vector(vector<int>& vi) {
	for (int i = 0 ; i < vi.size() - 1; ++i) {
		cout << vi[i] << " - ";
	}

	cout << vi[vi.size()-1] << "\n";
}

void bubble_sort(vector<int>& arr) {
	int n = arr.size();
	for (int i = 0 ; i < n; ++i) {
		for (int j = 0 ; j < n - 1; ++j) {
			if (arr[j] > arr[j+1]) {
				swap(arr[j], arr[j+1]);
			}

			print_vector(arr);
		}
		cout << "----\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> nums;
	int t;
	cin >> t;
	int x;
	while (t--) {
		cin >> x;
		nums.push_back(x);
	}

	print_vector(nums);
	bubble_sort(nums);

	return 1;
}