#include <bits/stdc++.h>

using namespace std;

int main() {
	int x = 0;
	for (;;) {
		cout << x << endl;
		x = (x + 1) * (x + 1);
		if (x > 100000) {
			break;
		}
	}
	return 0;
}


