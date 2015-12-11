#include <bits/stdc++.h> 

using namespace std;

int main() {
	int n = 0;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x = 0;
		cin >> x;
		sum += x;
	}
	cout << sum << endl;
	return 0;
}