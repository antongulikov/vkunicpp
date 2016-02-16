#include <bits/stdc++.h>

using namespace std;

int calc_sum(int a[], int n) {
	int ret = 0;
	for (int i = 0; i < n; i++)
		ret += a[i];
	return ret;
}

int calc_2(int *a, int n) {
	int ret = 0;
	for (int i = 0; i < n; i++) {
		ret += *(a + i);
	}
	return ret;
}

int calc_3(int *a, int n){
	int ret = 0;
	for (int i = 0; i < n; i++) {
		ret += i[a];
	}
	return ret;
}

int calc_4(int *a, int n) {
	int ret = 0;
	for (int i = 0; i < n; i++) {
		ret += a[i];
	}
	return ret;
}

int main() {
	int a[10];
	int b[10];
	for (int i = 0; i < 10; i++) {
		a[i] = i % 10;
		b[i] = i % 5;
	}
	cout << calc_sum(a, 10) << " " << calc_2(b, 10) << endl;
	cout << calc_3(a, 10) << " " << calc_4(b, 10) << endl;
	return 0;
}