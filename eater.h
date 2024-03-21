#pragma once
#include "class.h"

class Eater{
private:
    int _age;
    double _height;
    double _weight;
public:
    Eater() = delete;
    Eater (int age, double height, double weight);
    void eat_an_apple(Apple& a);
};