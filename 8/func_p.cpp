#include <bits/stdc++.h>

using namespace std;

int sum(int, int);

int do_some(int *start, int *end, int (*fun)(int,int)) {
	int ret = 0;
	while (start != end) {
		ret = (*fun)(ret, *start);
		start++;
	}
	return ret;
}

int main() {

	int (* p_sum)(int, int) = sum;
	int *a = new int[10];
	for (int i = 0; i < 10; i++)
		a[i] = i;
	cout << do_some(a, a + 10, p_sum) << endl;
	return 0;
}

int sum(int a, int b) {
	return a + b;
}