//
// Created by Nu lar on 11/16/23.
//
#ifndef CALCULATOR_MOUSEEVENT_CPP
#define CALCULATOR_MOUSEEVENT_CPP

#include "MouseEvent.h"

namespace MouseEvent {
    template<typename T>
    bool isHovered(const T& obj, sf::RenderWindow& window)
    {
        sf::Vector2f mpos = (sf::Vector2f) sf::Mouse::getPosition(window);
        return obj.getGlobalBounds().contains(mpos);
    }

    template<typename T>
    bool isClicked(const T& obj, sf::RenderWindow& window)
    {
        return isHovered(obj, window) && sf::Mouse::isButtonPressed(sf::Mouse::Left);
    }

};

#endif