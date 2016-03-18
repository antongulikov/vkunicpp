#include <queue> //- // queue, priority_queue
#include <bits/stdc++.h>
#include <stack>
#include <set>
#include <map>

// http://codeforces.com/problemset/problem/343/B
// http://codeforces.com/problemset/problem/4/C
// http://codeforces.com/problemset/problem/368/B
// http://codeforces.com/problemset/problem/427/B

using namespace std;

struct Foo {

	Foo(int age = 0, int salary = 0, string name = "") :
		age(age), salary(salary), name(name) {}

	bool operator < (const Foo &other) const  {
		if (salary > other.salary)
			return true;
		if (salary < other.salary)
			return false;
		if (age < other.age)
			return true;
		if (age > other.age)
			return false;
		return name < other.name;
	}

	string name;
	int age;
	int salary;

	void print() const {
		cout << name << " " << age << " " << salary << endl;
	}
};

int main() {
	/*priority_queue < Foo > q;
	while (!q.empty())
			q.pop();
	q.push(Foo(22, 50000, "Bob"));
	q.push(Foo(60, 10000000, "Mark"));
	q.push(Foo(1, 0, "Zhenya"));
	while (!q.empty())
	{
		auto x = q.top();
		q.pop();
		x.print();
	}*/

	/*queue < int > q;
	q.push(10);
	q.push(12);
	cout << q.front() << endl;
	cout << q.front() << endl;
	q.pop();
	cout << q.front();
	cout << q.size() << endl;
	if (!q.empty()) {
		cout << "I'm not empty";
	}
	q.push(1123);
	cout << q.back() << endl;*/

	/*stack < int > q;
	q.push(10);
	q.push(12);
	cout << q.top() << endl;
	cout << q.top() << endl;
	q.pop();
	cout << q.top() << endl;
	cout << q.size() << endl;
	if (!q.empty()) {
		cout << "I'm not empty\n";
	}
	q.push(1123);
	cout << q.top() << endl;*/
	/*
	set < Foo > s;
	s.insert(Foo(14, 500000, "Dmitry"));
	s.insert(Foo(13, 1e9, "victor"));
	s.insert(Foo(21, 400000, "Anton"));
	s.insert(Foo(14, 300000, "Kirill"));
	s.insert(Foo(13, -1, "Fedor"));
	s.insert(Foo(14, 500000, "Dmitry"));
	auto dm = Foo(14, 500000, "Dmitry");
	set < Foo > :: iterator it = s.find(dm);
	for (; it != s.end(); it++) {
		it->print();
	}	
	for (auto x : s) {
		x.print();
	}		
	cout << s.size() << endl;
	s.erase(dm);
	cout << s.size() << endl;*/
	map < string, Foo > sal;
	sal["Anton"] = Foo(1, 1, "asd");
	sal["Dmitry"] = Foo(1, 3, "As");
	sal["Vic"] = Foo(2, 1, "wqe");;
	sal["Kirill"].print();
	sal["Anton"].print();	
	for (auto x : sal) {
		cout << x.first << endl;
		Foo *y = &x.second;
		y->print();
	}
	return 0;
}