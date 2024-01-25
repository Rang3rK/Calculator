//
// Created by Nu lar on 11/14/23.
//

#ifndef CALCULATOR_POSITION_H
#define CALCULATOR_POSITION_H
#include <SFML/Graphics.hpp>
#include <cmath>
#include "Button.h"

class Position {
public:
    template<typename T>
    static void left(const T& constObj, T& obj, float spacing=10);
    template<typename T>
    static void right(const T& constObj, T& obj, float spacing=10);
    template<typename T>
    static void below(const T& constObj, T& obj, float spacing=10);


    template<typename T>
    static void centerText(const T &obj, sf::Text &text);
};



#include "Position.cpp"
#endif //CALCULATOR_POSITION_H
