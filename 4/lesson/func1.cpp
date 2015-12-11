#include <bits/stdc++.h>

using namespace std;

int even(int x) {
	return 1 - (x % 2);
}

int main() {
	int n;
	int m;
	int k;
	cin >> n >> m >> k;
	cout << even(n) + even(m) + even(k) << endl;
	return 0;
}