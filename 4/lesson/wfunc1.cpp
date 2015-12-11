#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	int m;
	int k;
	int ans = 0;
	if (n % 2 == 0)
		ans++;
	if (m % 2 == 0)
		ans++;
	if (k % 2 == 0)
		ans++;
	cout << ans << endl;
	return 0;
}