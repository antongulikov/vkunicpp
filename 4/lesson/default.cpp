#include <bits/stdc++.h>

using namespace std;

void foo(int a, int b = 1, int c = 1, int d = 1) {
	cout << a + b + c + d << endl;
}

int main() {	
	foo(1,2);
	return 0;
}