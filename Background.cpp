//
// Created by Nu lar on 11/14/23.
//

#include "Background.h"

Background::Background()
    : Background({100,100})
{

}

Background::Background(sf::Vector2f size)
    : sf::RectangleShape(size), States()
{

}

void Background::eventHandler(sf::RenderWindow& window, sf::Event event)
{
    if(MouseEvent::isHovered(*this, window))
    {
        enableState(HOVERED);
    }
    else
        disableState(HOVERED);
}

void Background::update()
{
    if(getState(HOVERED))
        setFillColor(sf::Color::Blue);
    else
        setFillColor(sf::Color::Black);
}