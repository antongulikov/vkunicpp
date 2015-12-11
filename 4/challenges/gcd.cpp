#include <bits/stdc++.h>

using namespace std;

inline int gcd(int a, int b) {
	return a ? gcd(b % a, a) : b;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << gcd(min(a, b), max(b, a)) << endl;
}