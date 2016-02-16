#include <bits/stdc++.h>

using namespace std;

int main() {
	int var = 42;
	int *p_var = &var;
	int **p_p_var = &p_var;
	cout << (*(*p_p_var)) << endl;
	var = 43;
	cout << (*(*p_p_var)) << endl;	

	int a[100];
	for (int i = 0; i < 100; i++)
		a[i] = i;

	int *p_a[100];
	for (int i = 0; i < 100; i++)
		p_a[i] = &a[i];
	for (int i = 0; i < 100; i++)
		cout << *(p_a[i]) << " ";

	cout << endl;


	const int maxn = 100000;
	int f_a[maxn];
	int *p_f = f_a;
	int s_a[maxn];
	int *p_s = s_a;

	for (int i = 1; i <= maxn; i++) {
		f_a[i - 1] = -i;
		s_a[i - 1] = i;
	}
	/*
	int fl = 1;
	for (int iter = 0; iter <= 10100; iter++) {
		for (int i = 0; i < maxn; i++)
			swap(f_a[i], s_a[i]);		
	}
	*/

	
	int fl = -1;
	for (int iter = 0; iter <= 10100; iter++) {
		swap(p_s, p_f);
		bool ok = true;
		for (int i = 0; i < 10; i++) {
			ok &= (*(p_s + i) == (fl * (i + 1))) && (*(p_f + i) == ((-fl) * (i + 1)));
		}
		assert(ok);
		fl = -fl;
	}
	

	
	cerr << (double)clock() / CLOCKS_PER_SEC << endl;
	return 0;
}