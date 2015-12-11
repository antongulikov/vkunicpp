#include <bits/stdc++.h>

using namespace std;


int main() {
	int n = 0;
	int a[4];
	
	
	for (int i = 0; i < 4; i++)
		cin >> a[i];
		
		
	for (int i = 0; i < 4; i++) {
		for (int j = i + 1; j < 4; j++) {
			if (a[i] < a[j])
				swap(a[i], a[j]);
		}
	}
	
	
	for (int i = 0; i < 4; i++)
		cout << a[i] << " ";
	return 0;
	
}
