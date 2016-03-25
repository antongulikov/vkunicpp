//
// Created by scorpion on 25.03.16.
//

#pragma once
#include <bits/stdc++.h>
using namespace std;

class MyPoint {
public:
    MyPoint(int x = 0, int y = 0);
    MyPoint operator , (const MyPoint & other);
    MyPoint& operator += (const MyPoint &other);
    int getX() const;
    int getY() const;

private:
    int x, y;
};
