#include <bits/stdc++.h>

using namespace std;

int main() {
	int x = 0; // 0 - бумага, 1 - ножницы, 2 - камень
	/*
	s	dlkfsdlkfjsdlk\
	
	sdlkfjsdlkfjsdlkf
	
	klsdjflksdjf
	*/
	
	for (;;) {
		cout << "0 - paper\n 1 - scisors \n 2 - rock\n";
		cin >> x;
		if (x > 2) {
			break;
		}
		switch (x) {
			case 0:
				cout << "scisors\n";
				break;
			case 1:
				cout << "rock\n";
				break;
			default:
				cout << "paper\n";
		}
	}
	return 0;
}
