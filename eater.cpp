#include "eater.h"

Eater::Eater(int age, double height, double weight){
    age = _age;
    height = _height;
    weight = _weight;
}

void Eater:: eat_an_apple(Apple& a){
    double n = a.GetWeight();
    _weight = _weight + n;
    while (a.GetStatus()){
        a.bite();
    }
}