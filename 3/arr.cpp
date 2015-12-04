#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int a[n];
	int b[5] = {1, 2, 3}; // b = {1, 2, 3, 0, 0}
	int c[3] = {}; // c = {0, 0, 0}
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] -= b[i % 5];
		c[i % 3] += a[i];
	}
	for (int i = 0; i < 3; i++)
		cout << c[i] << " ";
	return 0;
}
