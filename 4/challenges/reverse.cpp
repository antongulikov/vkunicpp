#include <bits/stdc++.h>

using namespace std;

void rec(int n) {
	if (n == 0)
		return;
	int x = 0;
	cin >> x;
	rec(n - 1);
	cout << x << " ";
}

int main() {
	int n = 0;
	cin >> n;
	rec(n);
	return 0;
}