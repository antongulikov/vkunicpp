#include <bits/stdc++.h>

using namespace std;

#define lambda []


struct A
{

	int x, y;

	A() {
		x = 1;
		y = 2;
	}	

	void init(vector <int> &a) {
		a.clear();
		a.resize(10);
		//a[i] = x * (y ^ i) = x * pow(y, i);
		for_each(a.begin(), a.end(),
			[this](int &val) mutable {
				val = x;
				x *= y;
			});	
	}
};

int main() {
	/*
	vector <int> a;
	a.clear();
	for (int i = 0; i < 10; i++)
		a.push_back(i);
	for_each(a.begin(), a.end(),
		[](int n) {			
			cout << n << " ";						
		}
		);
	cout << endl;
	vector <double> b;
	transform(a.begin(), a.end(), back_inserter(b), 
		[](int n) -> double {
			if (n < 4)
				return n + 1;
			else
			if (n % 2 == 0)
				return n / 2.;
			else
				return n * n;

		}
		);
	for (auto x : b)
		cout << x << " ";*/
	
/*	int tmp = 0;
	int y = 10;
	auto func = [&tmp](int x, double z) mutable -> int { 
			tmp++;
			z += 1;
			return x + tmp; };
	int a = 10;
	double z = 20;
		cout << func(a, z) << endl;
		cout << tmp << endl;
		cout << z << endl;
		/*
	cout << func(10,1) << endl;
	vector < int(*) (int, double) > funcs;
	funcs.push_back(func);
	cout << funcs[0](10,3) << endl;
	auto generator = [](int x) -> function < int (int) > {				
		return [x](int y) -> int { 					//!!!!
			return y + x;};
	};	
	int x = 1;
	auto add_5 = generator(x);
	cout << add_5(10) << endl;
	cout << add_5(0) << endl;
	*/

	A new_a;
	vector <int> tmp;
	tmp.clear();
	new_a.init(tmp);
	for (auto x : tmp) {
		cout << x << " ";
	}
	return 0;
	return 0;
}