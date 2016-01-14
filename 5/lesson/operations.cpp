#include <bits/stdc++.h>

using namespace std;

void bug1(){
	double a = 100000.0;
	double b = 0.00000001;
	a = a + b;
	cout << "Double : 100000.0 + 0.00000001 = " << a << endl;
}

void bug2(){
	float a = 123456789;
	float b = 123456788;
	a = a - b;
	cout << "Float : 123456789 - 123456788 = " << a << endl;
}

void bug3() {
	float a = 1/3.;
	double b = 1/3.;
	float c = 1/3.;
	double d = 1/3.;
	cout << "FLoat(1/3) - Double(1 / 3) = " << (a - b) << endl << "Float(1/3) - Float(1/3) = " << (d - b) << endl << (a - c) << endl;
}

void bug4() {
	int a = 123456789;
	float b = a;
	cout.precision(20);
	cout << "int a = 123456789 , float b = 123456789 = " <<  b << endl;
}


int main() {
	bug1();
	bug2();
	bug3();
	bug4();
	return 0;
}