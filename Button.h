//
// Created by Nu lar on 11/14/23.
//

#ifndef CALCULATOR_BUTTON_H
#define CALCULATOR_BUTTON_H
#include <SFML/Graphics.hpp>
#include "States.h"
#include "Font.h"
#include "MouseEvent.h"
#include "Position.h"

//button is child of States
class Button : public sf::Drawable, public States {
private:
    sf::Text text;
    sf::CircleShape circle;
    sf::Color defaultColor, clickColor;

    void setupText(const std::string& text, sf::Font& font);
public:
    Button();
    Button(const std::string& text);
    Button(const std::string& text, float radius);
    Button(const std::string& text, float radius, sf::Font& font);

    void setupCircle(float radius);
    void setRadius(float radius);

    void setFont(const sf::Font& font);
    void setText(const std::string& text);
    void setCharSize();
    std::string getText();

    void setClickColor(sf::Color color);
    void setDefaultColor(sf::Color color);
    void setPosition(sf::Vector2f position);
    sf::CircleShape& getCircle();
    void update();

    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void eventHandler(sf::RenderWindow& window, sf::Event event);
};


#endif //CALCULATOR_BUTTON_H
