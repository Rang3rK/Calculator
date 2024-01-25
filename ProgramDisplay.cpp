//
// Created by Nu lar on 12/4/23.
//

#include "ProgramDisplay.h"

void ProgramDisplay::run()
{
    sf::RenderWindow window({300,400,64}, "Calculator");
    window.setFramerateLimit(50);
    sf::Event event;
    window.setKeyRepeatEnabled(false);

    while(window.isOpen())
    {

        while(window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type)
                window.close();
            window.clear();
            window.draw(cal);
            window.display();
            cal.eventHandler(window,event);
        }
        cal.update();

    }
    window.clear();
    window.draw(cal);
    window.display();
}