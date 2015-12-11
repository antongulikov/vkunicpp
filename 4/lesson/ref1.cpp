#include <bits/stdc++.h>

using namespace std;

void do_some(int& a, int& b) {
	a = a + 1;
	b = b + 2;
}

void do_some_1(int a, int b) {
	a = a + 1;
	b = b + 2;
}

int main() {
	int a, b;
	cin >> a >> b;
	do_some(a, b);
	//cout << a << " " << b << endl;
	do_some_1(a, b);
	//cout << a << " " << b << endl;
}