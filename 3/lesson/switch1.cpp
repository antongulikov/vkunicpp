#include <bits/stdc++.h>

using namespace std;

int main() {


	int x = 0;
	cin >> x;
	int z = 0;
	cin >> z;
	z = 2;
	switch (x) {
		case 0: {
			cout << "null";
			x = 1;
			break;
		}
		case 1: {
			cout << "one";
			x = 2;
			break;
		}
		case 2: {
			int y;
			cin >> y;
			if (y == 0) {
				cout << "null";
			} else {
				cout << "foo bar";
			}
			break;
		}
		case 4: {
			for (int i = 0; i < x; i++)
				cout << i << " ";
			break;
		}
	}


	return 0;
}
