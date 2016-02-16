#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[4];
	for (int i = 0; i < 4; i++) {
		cin >> *(a + i);
	}
	int *end = &a[3];
	for (int i = 0; i < 4; i++) {
		cout < <*(end - i) << " ";
	}
	return 0;
}