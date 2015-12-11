#include <bits/stdc++.h>

using namespace std;

int main() {
	int dd, mm, yy;
	cin >> dd >> mm >> yy;
	mm--;
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int nd = 1;
	int nm = 0;
	int ny = 2016;
	int st = 4;
	for(;;){
		if (nd == dd && nm == mm && ny == yy)
			break;
		if (ny % 4 == 0)
			days[1] = 29;
		else
			days[1] = 28;
		st = (st + 1) % 7;
		if (nd < days[nm]) {
			nd++;
			continue;
		}
		nd = 1;
		if (nm < 11) {
			nm++;
			continue;
		}
		nm = 0;
		ny++;
	}
	string ans[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	cout << ans[st];
	return 0;
}
