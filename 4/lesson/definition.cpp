#include <bits/stdc++.h>

using namespace std;

int add(int, int);
int sub(int, int, int);

int main() {
	cout << add(1, 2) << "\n";
	cout << sub(1,2,3) << "\n";
	return 0;
}

int add(int a, int b) {
	return a + b;
}

int sub(int q, int w, int e) {
	return add(q, w) - e;
}



