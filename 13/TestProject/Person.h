//
// Created by scorpion on 25.03.16.
//

#ifndef TESTPROJECT_PERSON_H
#define TESTPROJECT_PERSON_H

#include <bits/stdc++.h>

using namespace std;

class Helper;

class Person {
public:
    Person(int age = 42, string name = "John");
    virtual void greeting() = 0;
    virtual ~Person() {}
    friend class Helper;
    static int count;

protected:
    int age;
    string name;
};

class Helper {
    Helper() {}
    Helper(const Person &tmp) {
        cout << tmp.age << " " << tmp.name << endl;
    }
};


#endif //TESTPROJECT_PERSON_H
