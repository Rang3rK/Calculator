//
// Created by Nu lar on 11/14/23.
//

#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H
#include "Display.h"
#include "RPN.h"
#include "Button.h"
#include "Background.h"
#include "Position.h"

#include <iostream>
#include <iomanip>

class Calculator : public sf::Drawable, public States {
private:
    Background background;
    std::vector<Button>buttons;
    Display display;
public:
    Calculator();
    void eventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    void updateDisplay(const std::string& text);
    sf::Text getTextObj();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};


#endif //CALCULATOR_CALCULATOR_H
