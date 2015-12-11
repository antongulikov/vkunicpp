#include <bits/stdc++.h>

using namespace std;

int c(int k, int n) {
	if (k == 0)
		return 1;
	if (n == k)
		return 1;
	return c(k - 1, n - 1) + c(k, n - 1);
}

int main() {
	int n, k;
	cin >> k >> n;
	cout << c(k, n) << endl;
}