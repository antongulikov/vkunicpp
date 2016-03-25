//
// Created by scorpion on 25.03.16.
//

#include "MyPoint.h"

MyPoint::MyPoint(int x, int y) : x(x), y(y){
    cout << "MyPoint in" << endl;
}

MyPoint MyPoint::operator,(const MyPoint &other) {
    return MyPoint(this->x + other.x, this->y + other.y);
}

int MyPoint::getX() const{
    return x;
}

int MyPoint::getY() const {
    return y;
}

MyPoint &MyPoint::operator+=(const MyPoint &other) {
    this->x += other.getX();
    this->y += other.getY();
    return *this;
}
