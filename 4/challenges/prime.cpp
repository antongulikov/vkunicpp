#include <bits/stdc++.h>

using namespace std;

long long prime(long long x) {
	
	for (long long i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	long long n = 0;
	cin >> n;
	cout << prime(n);
}