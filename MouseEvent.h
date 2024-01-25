//
// Created by Nu lar on 11/16/23.
//

#ifndef CALCULATOR_MOUSEEVENT_H
#define CALCULATOR_MOUSEEVENT_H

#include <SFML/Graphics.hpp>

namespace MouseEvent {
    template<typename T>
    bool isHovered(const T& obj, sf::RenderWindow& window);
    template<typename T>
    bool isClicked(const T& obj, sf::RenderWindow& window);
}

//do this when we use namespace
#include "MouseEvent.cpp"
#endif //CALCULATOR_MOUSEEVENT_H
