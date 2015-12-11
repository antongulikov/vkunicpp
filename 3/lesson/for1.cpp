#include <bits/stdc++.h>

using namespace std;

int main() {
	for (int a = 1, b = 2, c; a + b < 20 || a < 40; b += a, a++) {
		c = a + b;
		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}
