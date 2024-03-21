#pragma once
#include <iostream>
#include <cmath>
#include <cstdint>
#include <random>

enum Color{yellow, red, green};

class Apple{
private:
    double _width;
    double _height;
    double _weight;
    Color _color;
    bool _status;

public:
    Apple();
    Apple(double width, double height, double weight, Color color);
    void get_info() const;
    void bite();
    void throw_away();

    double GetWeight() const;
    bool GetStatus() const;
};