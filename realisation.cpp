#include "class.h"

Apple::Apple(){
    _width = 2 + rand()%10;
    _height = 2 + rand()%10;
    _weight = 30 + rand()%170;
    _color = static_cast<Color>(rand()%3);
    _status = true;
}

Apple::Apple(double width, double height, double weight, Color color){
    _width = width;
    _height = height;
    _weight = weight;
    _color = color;
}

void Apple:: get_info() const{
    std::cout << "Width = " << _width << std::endl;
    std::cout << "Height = " << _height << std::endl;
    std::cout << "Weight = " << _weight << std::endl;
    std::cout << "Color = ";
    switch (_color)
    {
    case 0: std::cout << "Yellow" << std::endl; break;
    case 1: std::cout << "Red" << std::endl; break;
    case 2: std::cout << "Green" << std::endl; break;
    }
}

void Apple:: bite(){
    if (!_status){
        std:: cout << "Apple doesn't exist";
        return;
    }
    _weight = _weight - 20;
    _height = _height - 2;
    _width = _width - 2;
    if (_weight <= 0 || _height <= 0 || _width <= 0){
        _status = false;
    }
}

void Apple:: throw_away(){
    _status = false;
}

double Apple:: GetWeight() const{
    return _weight;
}

bool Apple:: GetStatus() const{
    return _status;
}