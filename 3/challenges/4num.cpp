#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, c,d;
    cin >> a >> b >> c >> d;
    for (int i = a; i <= b; i++) {
        if (i % c == d)
            cout << i << " ";
    }
    return 0;
}
