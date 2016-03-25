#include <bits/stdc++.h>

using namespace std;

int main() {
	set <int> tmp;
	tmp.clear();
	vector <int> a;
	a.clear();
	int n = 0;
	int m = 0;
	cin >> n >> m;
	map <int, int> ans;
	for (int i = 0; i < n; i++) {
		int x = 0;
		cin >> x;
		a.push_back(x);
	}
	for (int i = a.size() - 1; i >= 0; i--) {
		tmp.insert(a[i]);
		ans[i + 1] = tmp.size();
	}
	while (m --> 0) {
		int t = 0;
		cin >> t;
		cout << ans[t] << endl;
	}
	return 0;
}