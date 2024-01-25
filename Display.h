//
// Created by Nu lar on 11/14/23.
//

#ifndef CALCULATOR_DISPLAY_H
#define CALCULATOR_DISPLAY_H
#include <SFML/Graphics.hpp>
#include "States.h"
#include "Font.h"
#include<iostream>

class Display : public sf::Drawable, public States
{
private:
    sf::Text text;
    sf::RectangleShape box;
    int limit;
    Display(sf::Vector2f size, sf::Font &font, unsigned int characterSize, sf::Color color, sf::Vector2f position, int limit); //private cuz we don't want users to see
public:
    Display();
    Display(sf::Vector2f size, sf::Font& font, unsigned int characterSize);

    void show();
    void clear();
    void setText(const std::string& text);
    void setCharacterLimit(int limit);
    void setColor(sf::Color);
    void setFont(const sf::Font& font);   //font must be pass by reference otherwise segFault 139
    void setSize(sf::Vector2f display_size);
    void setCharacterSize(unsigned int characterSize);
    void setPosition(sf::Vector2f position);
    void setTextPosition(sf::Vector2f position);
    std::string getText();
    sf::Text getTextReal();
    std::string concatString(const std::string& addtext);
    sf::RectangleShape getRect();


    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};


#endif //CALCULATOR_DISPLAY_H
