#include <iostream>

using namespace std;

#include "MyPoint.h"
#include "Man.h"
#include "Woman.h"

ostream& operator << (ostream &so, const MyPoint &other) {
    so << "X : " << other.getX() << " Y :" << other.getY() << endl;
    return so;
}

int Person::count = 0;

int main() {
    cout << "Hello, World!" << endl;
    MyPoint a(1, 2);
    a = (a , a);
    cout << a << endl;
    Man victor(10, "victor");
    Woman ella(10, "ella");

    cout << ella.count << endl;

    cout << victor.count << endl;

    cout << Person::count << endl;

    victor.playFootball();
    ella.cooking();
    ella.greeting();
    victor.greeting();
    vector < Person* > people;
    people.push_back(&ella);
    people.push_back(&victor);
    Person * tmp1 = people[0];
    Person * tmp2 = people[1];

    cout << "------\n";
    for (auto person : people) {
        person->greeting();
    }
    return 0;
}