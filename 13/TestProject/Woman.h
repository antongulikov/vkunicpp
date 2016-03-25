//
// Created by scorpion on 25.03.16.
//

#ifndef TESTPROJECT_WOMAN_H
#define TESTPROJECT_WOMAN_H


#include "Person.h"

class Woman : public Person{
public:
    Woman(int age, string name) : Person(age, name) {}
    void cooking() {
        cout << name << "is cooking right now!\n";
    }

    void greeting() {
        cout << "Mrs " << name << endl;
    }
};


#endif //TESTPROJECT_WOMAN_H
