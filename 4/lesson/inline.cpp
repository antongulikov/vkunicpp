#include <bits/stdc++.h>

using namespace std;

int ans = 0;

inline void do_some(int a) {
	ans += a % 2 + a ^ 2;	
}


int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		do_some(i);
	cout << ans << endl;
}