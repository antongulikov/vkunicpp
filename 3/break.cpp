		#include <bits/stdc++.h>
		
		using namespace std;
		
		int main() {
			int n = 0;
			cin >> n;
			int sum = 0;
			for (int i = 0; i < n; i++) {
				int x = 0;
				cin >> x;
				for (; x > 0; x /= 10) {
					sum += x % 10;
				}
			}
			cout << sum << endl;
			return 0;
		}
