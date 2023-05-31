#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	/*
	a b
	a even -> even number of odd and even numbers
	b < a/2 -> return odd number => return 2*b-1
	b > a/2 -> return even number => 2*(b-a/2)

	7 -> 1 3 5 7 2 4 6
	a odd -> number of odds greater with 1 than number of evens
	b < ceil(a/2) -> return odd number => return 2*b-1

	1 3 5 7 2 4 6 8
	2
	*/

	long long a, b;
	cin >> a >> b;
	long long res;

	if (b <= ceil((double)a/2)) {
		res = 2 * b - 1;
	} else {
		res = 2 * (b-ceil((double)a/2));
	}

	cout << res << "\n";

	return 0;
}