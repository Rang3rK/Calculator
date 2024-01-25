//
// Created by Nu lar on 11/14/23.
//

#include "Display.h"

Display::Display()
    : Display({100,100},Font::getFont(ARIAL), 24, sf::Color(50,50,50), {10,10},9)
{

}

Display::Display(sf::Vector2f size, sf::Font &font, unsigned int characterSize)
    : Display(size, font, characterSize, sf::Color(50,50,50), {10,10} ,9)
{

}

Display::Display(sf::Vector2f size, sf::Font &font, unsigned int characterSize, sf::Color color, sf::Vector2f position, int limit)
{
    setSize(size);
    setFont(font);
    setCharacterSize(characterSize);
    setColor(color);
    setPosition(position);
    setCharacterLimit(limit);
}


void Display::show() {
    //TODO after states is created
    disableState(HIDDEN);
}

void Display::clear() {
    text.setString("");
}

void Display::setText(const std::string &text) {
    this->text.setString(text);
}

void Display::setCharacterLimit(int limit) {
    this->limit = limit;
}

void Display::setColor(sf::Color color) {
    this->box.setFillColor(color);
}

void Display::setFont(const sf::Font &font) {
    this->text.setFont(font);
}

void Display::setSize(sf::Vector2f display_size) {
    box.setSize(display_size);
}

void Display::setCharacterSize(unsigned int characterSize)
{
    text.setCharacterSize(characterSize);
}

void Display::setPosition(sf::Vector2f position)
{
    //text.setPosition(position);
    box.setPosition(position);
}

void Display::setTextPosition(sf::Vector2f position)
{
   text.setPosition(position);
}

std::string Display::getText() {
    return text.getString();
}

sf::Text Display::getTextReal()
{
    return this->text;
}

sf::RectangleShape Display::getRect()
{
    return this->box;
}

std::string Display::concatString(const std::string& addtext) {
    std::string result = text.getString();
    //std::cout<<"before concate: "<<result<<std::endl;
    result += addtext;
    //std::cout<<"after concate: "<<result<<std::endl;
    text.setString(result);
    return text.getString();
}

void Display::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    if(!getState(HIDDEN))
    {
        window.draw(box);
        window.draw(text);
    }
}


