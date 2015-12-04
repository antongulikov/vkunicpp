#include <bits/stdc++.h>

using namespace std;

int main() {
	for (int a = 1, b = 2, c; a + b < 10; b += a) {
		c = a + b;
		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}
