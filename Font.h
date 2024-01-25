//
// Created by Nu lar on 11/14/23.
//

#ifndef CALCULATOR_FONT_H
#define CALCULATOR_FONT_H
#include <SFML/Graphics.hpp>
#include <map>
#include "fontsEnum.h"

//will load font once for the entire program
class Font : public sf::Drawable {
private:
    inline static std::map<FontEnum, sf::Font>fonts;
    static std::string getPath(FontEnum font);
    static void loadFont(FontEnum font);
public:
    static sf::Font& getFont(FontEnum font);
};


#endif //CALCULATOR_FONT_H
