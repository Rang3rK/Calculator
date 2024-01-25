//
// Created by Nu lar on 11/14/23.
//

#ifndef CALCULATOR_BACKGROUND_H
#define CALCULATOR_BACKGROUND_H
#include "States.h"
#include "MouseEvent.h"

class Background : public sf::RectangleShape, public States {
private:

public:

    Background();
    Background(sf::Vector2f size);
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
};


#endif //CALCULATOR_BACKGROUND_H
