#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	/*
	n friends
	k bottles
	l ml/bottle
	c limes
	d slices/lime
	p grams of salt

	for toast:
	each friend needs:

	nl milllieters of the drink
	one slice of lime
	np grams of salt
	*/

	int x = k * l / nl;
	int y = c * d;
	int z = p / np;

	int res = min(x, min(y, z)) / n;

	cout << res << "\n";

	return 0;
}