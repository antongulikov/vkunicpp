//
// Created by scorpion on 25.03.16.
//

#ifndef TESTPROJECT_MAN_H
#define TESTPROJECT_MAN_H


#include "Person.h"

class Man : public Person{
public:
    Man(int age, string name) : Person(age, name){
        cout << "Man in";
    }
    void playFootball() {
        cout << name << " like football very much!" << endl;
    }
    void greeting() {
        cout << "Mr " << name << endl;
    }

    ~Man() {
        cout << "Man out";
    }

};


#endif //TESTPROJECT_MAN_H
